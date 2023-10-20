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
 * @file MLModelNode.hpp
 */


#ifndef SUSTAINMLCPP_NODES_HARDWARERESOURCESNODE_HPP
#define SUSTAINMLCPP_NODES_HARDWARERESOURCESNODE_HPP

#include <sustainml_cpp/core/Node.hpp>
#include <sustainml_cpp/core/Callable.hpp>
#include <sustainml_cpp/types/types.h>

#include <vector>
#include <memory>

namespace sustainml {
namespace core {
    template<class T> class QueuedNodeListener;
}
namespace hardware_module {

    class Node;
    class Dispatcher;

    using HardwareResourcesCallable = core::Callable<types::MLModel, types::NodeStatus, types::HWResource>;
    struct HardwareResourcesTaskListener : public HardwareResourcesCallable
    {
        virtual ~HardwareResourcesTaskListener()
        {
        }

        virtual void on_new_task_available(
                types::MLModel& model,
                types::NodeStatus& status,
                types::HWResource& output) override
        {
        }
    };

    /**
    * @brief Hardware Resources Node Implementation
    * It requires the
    * - ML Model
    * as input
    */
    class HardwareResourcesNode : public ::sustainml::core::Node
    {

        enum ExpectedInputSamples
        {
            ML_MODEL_SAMPLE,
            MAX
        };

        enum TaskData
        {
            TASK_STATUS_DATA = ExpectedInputSamples::MAX,
            TASK_OUTPUT_DATA
        };

    public:

        SUSTAINML_CPP_DLL_API HardwareResourcesNode(HardwareResourcesTaskListener& user_listener);

        SUSTAINML_CPP_DLL_API virtual ~HardwareResourcesNode();

    private:

        /**
        * @brief Invokes the user callback with the provided inputs.
        *
        * @param inputs A vector containing the required samples. All the samples
        * must correspond to the same task_id.
        */
        void publish_to_user(const std::vector<std::pair<int, void*>> inputs) override;

        HardwareResourcesTaskListener& user_listener_;

        std::unique_ptr<core::QueuedNodeListener<types::MLModel>> listener_ml_model_queue_;

        std::mutex mtx_;
        //! task id to <NodeStatus, HWResource>
        std::map<int, std::pair<types::NodeStatus, types::HWResource>>  task_data_;

    };

} // namespace hardware_module
} // namespace sustainml

#endif // SUSTAINMLCPP_NODES_HARDWARERESOURCESNODE_HPP
