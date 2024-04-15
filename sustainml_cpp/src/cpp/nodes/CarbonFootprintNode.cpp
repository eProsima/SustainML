// Copyright 2023 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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
 * @file CarbonFootprintNode.cpp
 */

#include <sustainml_cpp/nodes/CarbonFootprintNode.hpp>

#include <fastdds/dds/publisher/DataWriter.hpp>

#include <common/Common.hpp>
#include <core/Options.hpp>
#include <core/QueuedNodeListener.hpp>
#include <types/typesImpl.h>

using namespace types;

namespace sustainml {
namespace carbon_tracker_module {

CarbonFootprintNode::CarbonFootprintNode(
        CarbonFootprintTaskListener& user_listener)
    : Node(common::CO2_TRACKER_NODE)
    , user_listener_(user_listener)
{
    sustainml::core::Options opts;
    opts.rqos.resource_limits().max_instances = 500;
    opts.rqos.resource_limits().max_samples_per_instance = 1;
    opts.rqos.durability().kind = eprosima::fastdds::dds::TRANSIENT_LOCAL_DURABILITY_QOS;
    opts.rqos.reliability().kind = eprosima::fastdds::dds::RELIABLE_RELIABILITY_QOS;
    opts.rqos.history().kind = eprosima::fastdds::dds::KEEP_LAST_HISTORY_QOS;
    opts.rqos.history().depth = 1;

    opts.wqos.resource_limits().max_instances = 500;
    opts.wqos.resource_limits().max_samples_per_instance = 1;
    opts.wqos.durability().kind = eprosima::fastdds::dds::TRANSIENT_LOCAL_DURABILITY_QOS;

    init(opts);
}

CarbonFootprintNode::CarbonFootprintNode(
        CarbonFootprintTaskListener& user_listener,
        sustainml::core::Options opts)
    : Node(common::CO2_TRACKER_NODE, opts)
    , user_listener_(user_listener)
{
    init(opts);
}

CarbonFootprintNode::~CarbonFootprintNode()
{

}

void CarbonFootprintNode::init (
        const sustainml::core::Options& opts)
{
    listener_ml_model_queue_.reset(new core::QueuedNodeListener<MLModel>(this));
    listener_hw_queue_.reset(new core::QueuedNodeListener<HWResource>(this));
    listener_user_input_queue_.reset(new core::QueuedNodeListener<UserInput>(this));

    task_data_pool_.reset(new utils::SamplePool<std::pair<NodeStatus, CO2Footprint>>(opts));

    initialize_subscription(sustainml::common::TopicCollection::get()[common::ML_MODEL].first.c_str(),
            sustainml::common::TopicCollection::get()[common::ML_MODEL].second.c_str(),
            &(*listener_ml_model_queue_), opts);

    initialize_subscription(sustainml::common::TopicCollection::get()[common::HW_RESOURCE].first.c_str(),
            sustainml::common::TopicCollection::get()[common::HW_RESOURCE].second.c_str(),
            &(*listener_hw_queue_), opts);

    initialize_subscription(sustainml::common::TopicCollection::get()[common::USER_INPUT].first.c_str(),
            sustainml::common::TopicCollection::get()[common::USER_INPUT].second.c_str(),
            &(*listener_user_input_queue_), opts);

    initialize_publication(sustainml::common::TopicCollection::get()[common::CO2_FOOTPRINT].first.c_str(),
            sustainml::common::TopicCollection::get()[common::CO2_FOOTPRINT].second.c_str(),
            opts);
}

void CarbonFootprintNode::publish_to_user(
        const int& task_id,
        const std::vector<std::pair<int, void*>> input_samples)
{
    //! Expected inputs are the number of reader minus the control reader
    if (input_samples.size() == ExpectedInputSamples::MAX)
    {
        auto& user_listener_args = user_listener_.create_and_get_user_cb_args(task_id);

        size_t samples_retrieved{0};
        common::pair_queue_id_with_sample_type(
            input_samples,
            user_listener_args,
            ExpectedInputSamples::MAX,
            samples_retrieved);

        std::pair<NodeStatus, CO2Footprint>* task_data_cache;

        {
            std::lock_guard<std::mutex> lock (mtx_);

            auto& status = std::get<TASK_STATUS_DATA>(user_listener_args);
            auto& output = std::get<TASK_OUTPUT_DATA>(user_listener_args);

            task_data_cache = task_data_pool_->get_new_cache_nts();

            status = &task_data_cache->first;
            output = &task_data_cache->second;
        }

        //! TODO: Manage task statuses individually

        if (status() != NODE_RUNNING)
        {
            status(NODE_RUNNING);
            publish_node_status();
        }

        user_listener_.invoke_user_cb(task_id, core::helper::gen_seq<CarbonFootprintCallable::size>{});

        //! Ensure task_id is forwarded to the output
        task_data_cache->second.task_id(task_id);

        if (task_data_cache->first.node_status() != NODE_ERROR)
        {
            status(NODE_IDLE);
        }
        else
        {
            status(NODE_ERROR);
        }

        publish_node_status();
        writers()[OUTPUT_WRITER_IDX]->write(task_data_cache->second.get_impl());

        listener_ml_model_queue_->remove_element_by_taskid(task_id);
        listener_hw_queue_->remove_element_by_taskid(task_id);
        listener_user_input_queue_->remove_element_by_taskid(task_id);

        {
            std::unique_lock<std::mutex> lock (mtx_);
            task_data_pool_->release_cache_nts(task_data_cache);
            user_listener_.remove_task_args(task_id);
        }
    }
    else
    {
        EPROSIMA_LOG_ERROR(CO2_NODE, "Input size mismatch");
    }
}

} // carbon_tracker_module
} // sustainml
