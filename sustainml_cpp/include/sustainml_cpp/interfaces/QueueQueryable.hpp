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
 * @file QueueQueryable.hpp
 */

#ifndef SUSTAINMLCPP_INTERFACES_QUEUEQUERYABLE_HPP
#define SUSTAINMLCPP_INTERFACES_QUEUEQUERYABLE_HPP

#include <sustainml_cpp/core/SamplesQueue.hpp>

namespace sustainml {
namespace interfaces {

    template <typename T>
    struct QueueQueryable
    {
        /**
        * @brief Retrieves a shared pointer to the queue.
        *
        * @return Queue pointer.
        */
        virtual core::SamplesQueue<T>* get_queue() = 0;

    };

} // namespace interfaces
} // namespace sustainml

#endif // SUSTAINMLCPP_INTERFACES_QUEUEQUERYABLE_HPP
