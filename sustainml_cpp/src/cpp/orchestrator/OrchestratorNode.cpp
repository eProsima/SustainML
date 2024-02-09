
// Copyright 2024 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file OrchestratorNode.cpp
 */

#include <sustainml_cpp/orchestrator/OrchestratorNode.hpp>

#include "ModuleNodeProxyFactory.hpp"
#include "TaskDB.ipp"

#include <common/Common.hpp>
#include <orchestrator/TaskManager.hpp>
#include <types/typesImplPubSubTypes.h>
#include <types/typesImplTypeObject.h>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/topic/Topic.hpp>
#include <fastdds/dds/topic/TypeSupport.hpp>

using namespace eprosima::fastdds::dds;

namespace sustainml {
namespace orchestrator {

OrchestratorNode::OrchestratorParticipantListener::OrchestratorParticipantListener(
        OrchestratorNode* orchestrator)
    : orchestrator_(orchestrator)
{

}

void OrchestratorNode::OrchestratorParticipantListener::on_participant_discovery(
        eprosima::fastdds::dds::DomainParticipant* participant,
        eprosima::fastrtps::rtps::ParticipantDiscoveryInfo&& info)
{
    eprosima::fastrtps::string_255 participant_name = info.info.m_participantName;
    EPROSIMA_LOG_INFO(ORCHESTRATOR, "Orchestrator discovered a new Participant with name " << participant_name);

    // Synchronise with Orchestrator initialization
    if (!orchestrator_->initialized_.load())
    {
        std::unique_lock<std::mutex> lock(orchestrator_->get_mutex());
        orchestrator_->initialization_cv_.wait(lock, [&]()
                {
                    return orchestrator_->initialized_.load();
                });
    }

    // create the proxy for this node
    NodeID node_id = common::get_node_id_from_name(participant_name);

    if (info.status == info.DISCOVERED_PARTICIPANT &&
            orchestrator_->node_proxies_[static_cast<uint32_t>(node_id)] == nullptr)
    {
        EPROSIMA_LOG_INFO(ORCHESTRATOR, "Creating node proxy for " << participant_name << " node");
        ModuleNodeProxyFactory::make_node_proxy(
            node_id,
            orchestrator_,
            orchestrator_->task_db_,
            orchestrator_->node_proxies_[static_cast<uint32_t>(node_id)]);
    }
    else if ((info.status == info.DROPPED_PARTICIPANT || info.status == info.REMOVED_PARTICIPANT) &&
            orchestrator_->node_proxies_[static_cast<uint32_t>(node_id)] != nullptr)
    {
        EPROSIMA_LOG_INFO(ORCHESTRATOR, "Setting inactive " << participant_name << " node");
        types::NodeStatus status = orchestrator_->node_proxies_[static_cast<uint32_t>(node_id)]->get_status();
        status.node_status(NODE_INACTIVE);
        std::lock_guard<std::mutex> lock(orchestrator_->mtx_);
        orchestrator_->node_proxies_[static_cast<uint32_t>(node_id)]->set_status(status);
        orchestrator_->handler_->on_node_status_change(node_id, status);
    }
}

OrchestratorNode::OrchestratorNode(
        std::shared_ptr<OrchestratorNodeHandle> handle,
        uint32_t domain)
    : domain_(domain)
    , handler_(handle)
    , node_proxies_({
            nullptr,
            nullptr,
            nullptr,
            nullptr
        }),
    task_db_(new TaskDB_t()),
    task_man_(new TaskManager()),
    participant_listener_(new OrchestratorParticipantListener(this))
{
    if (!init())
    {
        EPROSIMA_LOG_ERROR(ORCHESTRATOR, "Orchestrator initialization Failed");
    }
}

OrchestratorNode::~OrchestratorNode()
{

    for (size_t i = 0; i < (size_t)NodeID::MAX; i++)
    {
        std::lock_guard<std::mutex> lock(mtx_);
        if (node_proxies_[i] != nullptr)
        {
            delete node_proxies_[i];
        }
    }

    if (sub_ != nullptr)
    {
        sub_->delete_contained_entities();
    }

    if (pub_ != nullptr)
    {
        pub_->delete_contained_entities();
    }

    if (participant_ != nullptr)
    {
        participant_->delete_contained_entities();
    }

    DomainParticipantFactory::get_instance()->delete_participant(participant_);

    delete task_man_;
}

bool OrchestratorNode::init()
{
    auto dpf = DomainParticipantFactory::get_instance();

    //! Initialize entities
    participant_ = dpf->create_participant(domain_,
                    PARTICIPANT_QOS_DEFAULT,
                    participant_listener_.get(),
                    StatusMask::all() >> StatusMask::data_on_readers());

    if (participant_ == nullptr)
    {
        return false;
    }

    //! Register Common Types
    std::vector<eprosima::fastdds::dds::TypeSupport> sustainml_types;
    sustainml_types.reserve(common::Topics::MAX);

    sustainml_types.push_back(static_cast<TypeSupport>(new NodeStatusImplPubSubType()));
    sustainml_types.push_back(static_cast<TypeSupport>(new NodeControlImplPubSubType()));
    sustainml_types.push_back(static_cast<TypeSupport>(new UserInputImplPubSubType()));
    sustainml_types.push_back(static_cast<TypeSupport>(new EncodedTaskImplPubSubType()));
    sustainml_types.push_back(static_cast<TypeSupport>(new MLModelImplPubSubType()));
    sustainml_types.push_back(static_cast<TypeSupport>(new HWResourceImplPubSubType()));
    sustainml_types.push_back(static_cast<TypeSupport>(new CO2FootprintImplPubSubType()));

    for (auto&& type : sustainml_types)
    {
        participant_->register_type(type);
    }

    // Register type objects
    registertypesImplTypes();

    status_topic_ = participant_->create_topic(
        common::TopicCollection::get()[common::Topics::NODE_STATUS].first.c_str(),
        common::TopicCollection::get()[common::Topics::NODE_STATUS].second.c_str(), TOPIC_QOS_DEFAULT);

    control_topic_ = participant_->create_topic(
        common::TopicCollection::get()[common::Topics::NODE_CONTROL].first.c_str(),
        common::TopicCollection::get()[common::Topics::NODE_CONTROL].second.c_str(), TOPIC_QOS_DEFAULT);

    user_input_topic_ = participant_->create_topic(
        common::TopicCollection::get()[common::Topics::USER_INPUT].first.c_str(),
        common::TopicCollection::get()[common::Topics::USER_INPUT].second.c_str(), TOPIC_QOS_DEFAULT);

    if (status_topic_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(ORCHESTRATOR, "Error creating the status topic");
        return false;
    }

    pub_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT);

    if (pub_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(ORCHESTRATOR, "Error creating the publisher");
        return false;
    }

    DataWriterQos dwqos = DATAWRITER_QOS_DEFAULT;
    dwqos.resource_limits().max_instances = 500;
    dwqos.resource_limits().max_samples_per_instance = 1;

    control_writer_ = pub_->create_datawriter(control_topic_, dwqos);

    if (control_writer_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(ORCHESTRATOR, "Error creating the control writer");
        return false;
    }

    user_input_writer_ = pub_->create_datawriter(user_input_topic_, dwqos);

    if (user_input_topic_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(ORCHESTRATOR, "Error creating the user input writer");
        return false;
    }

    sub_ = participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT);

    if (sub_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(ORCHESTRATOR, "Error creating the subscriber");
        return false;
    }

    initialized_.store(true);
    initialization_cv_.notify_one();
    return true;
}

std::pair<int, types::UserInput*> OrchestratorNode::prepare_new_task()
{
    std::pair<int, types::UserInput*> output;
    int new_task_id = task_man_->create_new_task_id();
    task_db_->prepare_new_entry(new_task_id);
    task_db_->get_task_data(new_task_id, output.second);
    output.first = new_task_id;
    return output;
}

bool OrchestratorNode::start_task(
        const int& task_id,
        types::UserInput* ui)
{
    user_input_writer_->write(ui->get_impl());
    return true;
}

RetCode_t OrchestratorNode::get_task_data(
        const int& task_id,
        const NodeID& node_id,
        void*& data)
{
    RetCode_t ret = RetCode_t::RETCODE_NO_DATA;

    switch (node_id)
    {
        case NodeID::ID_TASK_ENCODER:
        {
            MapFromNodeIDToType_t<NodeID::ID_TASK_ENCODER>::type* typed_data = nullptr;
            if (task_db_->get_task_data(task_id, typed_data))
            {
                data = typed_data;
                ret = RetCode_t::RETCODE_OK;
            }
            break;
        }
        case NodeID::ID_MACHINE_LEARNING:
        {
            MapFromNodeIDToType_t<NodeID::ID_MACHINE_LEARNING>::type* typed_data = nullptr;
            if (task_db_->get_task_data(task_id, typed_data))
            {
                data = typed_data;
                ret = RetCode_t::RETCODE_OK;
            }
            break;
        }
        case NodeID::ID_HARDWARE_RESOURCES:
        {
            MapFromNodeIDToType_t<NodeID::ID_HARDWARE_RESOURCES>::type* typed_data = nullptr;
            if (task_db_->get_task_data(task_id, typed_data))
            {
                data = typed_data;
                ret = RetCode_t::RETCODE_OK;
            }
            break;
        }
        case NodeID::ID_CARBON_FOOTPRINT:
        {
            MapFromNodeIDToType_t<NodeID::ID_CARBON_FOOTPRINT>::type* typed_data = nullptr;
            if (task_db_->get_task_data(task_id, typed_data))
            {
                data = typed_data;
                ret = RetCode_t::RETCODE_OK;
            }
            break;
        }
        case NodeID::ID_ORCHESTRATOR:
        {
            MapFromNodeIDToType_t<NodeID::ID_ORCHESTRATOR>::type* typed_data = nullptr;
            if (task_db_->get_task_data(task_id, typed_data))
            {
                data = typed_data;
                ret = RetCode_t::RETCODE_OK;
            }
        }
        default:
        {
            EPROSIMA_LOG_ERROR(ORCHESTRATOR, "Requested Data from non-existing node ID");
            break;
        }
    }

    return ret;
}

RetCode_t OrchestratorNode::get_node_status(
        const NodeID& node_id,
        const types::NodeStatus*& status)
{
    RetCode_t ret = RetCode_t::RETCODE_NO_DATA;

    if ((int)node_id >= 0 && node_id < NodeID::MAX)
    {
        status = &node_proxies_[(int)node_id]->get_status();
        ret = RetCode_t::RETCODE_OK;
    }

    return ret;
}

} // namespace orchestrator
} // namespace orchestrator

