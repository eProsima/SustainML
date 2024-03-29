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

/*!
 * @file types.h
 *
 */

#ifndef _FAST_DDS_TYPES_H_
#define _FAST_DDS_TYPES_H_

#include <array>
#include <bitset>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>


#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(TYPES_SOURCE)
#define TYPES_DllAPI __declspec( dllexport )
#else
#define TYPES_DllAPI __declspec( dllimport )
#endif // TYPES_SOURCE
#else
#define TYPES_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define TYPES_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima

class NodeStatusImpl;
class NodeControlImpl;
class GeoLocationImpl;
class UserInputImpl;
class EncodedTaskImpl;
class MLModelImpl;
class HWResourceImpl;
class CO2FootprintImpl;

enum Status : uint32_t;
enum TaskStatus : uint32_t;
enum ErrorCode : uint32_t;
enum CmdNode : uint32_t;
enum CmdTask : uint32_t;

namespace types {

/*!
 * @brief This class represents the structure NodeStatus defined by the user in the IDL file.
 * @ingroup types
 */
class NodeStatus
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport NodeStatus();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~NodeStatus();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object NodeStatus that will be copied.
     */
    eProsima_user_DllExport NodeStatus(
            const NodeStatus& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object NodeStatus that will be copied.
     */
    eProsima_user_DllExport NodeStatus(
            NodeStatus&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object NodeStatus that will be copied.
     */
    eProsima_user_DllExport NodeStatus& operator =(
            const NodeStatus& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object NodeStatus that will be copied.
     */
    eProsima_user_DllExport NodeStatus& operator =(
            NodeStatus&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x NodeStatus object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const NodeStatus& x) const;

    /*!
     * @brief Comparison operator.
     * @param x NodeStatus object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const NodeStatus& x) const;

    /*!
     * @brief This function sets a value in member node_status
     * @param _node_status New value for member node_status
     */
    eProsima_user_DllExport void node_status(
            Status _node_status);

    /*!
     * @brief This function returns the value of member node_status
     * @return Value of member node_status
     */
    eProsima_user_DllExport Status node_status() const;

    /*!
     * @brief This function returns a reference to member node_status
     * @return Reference to member node_status
     */
    eProsima_user_DllExport Status& node_status();


    /*!
     * @brief This function sets a value in member task_status
     * @param _task_status New value for member task_status
     */
    eProsima_user_DllExport void task_status(
            TaskStatus _task_status);

    /*!
     * @brief This function returns the value of member task_status
     * @return Value of member task_status
     */
    eProsima_user_DllExport TaskStatus task_status() const;

    /*!
     * @brief This function returns a reference to member task_status
     * @return Reference to member task_status
     */
    eProsima_user_DllExport TaskStatus& task_status();


    /*!
     * @brief This function sets a value in member error_code
     * @param _error_code New value for member error_code
     */
    eProsima_user_DllExport void error_code(
            ErrorCode _error_code);

    /*!
     * @brief This function returns the value of member error_code
     * @return Value of member error_code
     */
    eProsima_user_DllExport ErrorCode error_code() const;

    /*!
     * @brief This function returns a reference to member error_code
     * @return Reference to member error_code
     */
    eProsima_user_DllExport ErrorCode& error_code();


    /*!
     * @brief This function sets a value in member task_id
     * @param _task_id New value for member task_id
     */
    eProsima_user_DllExport void task_id(
            int32_t _task_id);

    /*!
     * @brief This function returns the value of member task_id
     * @return Value of member task_id
     */
    eProsima_user_DllExport int32_t task_id() const;

    /*!
     * @brief This function returns a reference to member task_id
     * @return Reference to member task_id
     */
    eProsima_user_DllExport int32_t& task_id();


    /*!
     * @brief This function copies the value in member error_description
     * @param _error_description New value to be copied in member error_description
     */
    eProsima_user_DllExport void error_description(
            const std::string& _error_description);

    /*!
     * @brief This function moves the value in member error_description
     * @param _error_description New value to be moved in member error_description
     */
    eProsima_user_DllExport void error_description(
            std::string&& _error_description);

    /*!
     * @brief This function returns a constant reference to member error_description
     * @return Constant reference to member error_description
     */
    eProsima_user_DllExport const std::string& error_description() const;

    /*!
     * @brief This function returns a copy of the error_description member
     * @return Copy of the error_description member
     */
    eProsima_user_DllExport std::string error_description();


    /*!
     * @brief This function copies the value in member node_name
     * @param _node_name New value to be copied in member node_name
     */
    eProsima_user_DllExport void node_name(
            const std::string& _node_name);

    /*!
     * @brief This function moves the value in member node_name
     * @param _node_name New value to be moved in member node_name
     */
    eProsima_user_DllExport void node_name(
            std::string&& _node_name);

    /*!
     * @brief This function returns a constant reference to member node_name
     * @return Constant reference to member node_name
     */
    eProsima_user_DllExport const std::string& node_name() const;

    /*!
     * @brief This function returns a copy of the node_name member
     * @return Copy of the node_name member
     */
    eProsima_user_DllExport std::string node_name();

    /*!
     * @brief This function updates and publish the new given status.
     * @param new_status new status to be updated and published.
     */
    eProsima_user_DllExport void update(
            uint32_t new_status);

    /*!
     * @brief This function returns the implementation
     * @return Pointer to implementation
     */
    NodeStatusImpl* get_impl();

protected:

    NodeStatusImpl* impl_;
    friend class NodeStatusImpl;

};

/*!
 * @brief This class represents the structure NodeControl defined by the user in the IDL file.
 * @ingroup types
 */
class NodeControl
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport NodeControl();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~NodeControl();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object NodeControl that will be copied.
     */
    eProsima_user_DllExport NodeControl(
            const NodeControl& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object NodeControl that will be copied.
     */
    eProsima_user_DllExport NodeControl(
            NodeControl&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object NodeControl that will be copied.
     */
    eProsima_user_DllExport NodeControl& operator =(
            const NodeControl& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object NodeControl that will be copied.
     */
    eProsima_user_DllExport NodeControl& operator =(
            NodeControl&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x NodeControl object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const NodeControl& x) const;

    /*!
     * @brief Comparison operator.
     * @param x NodeControl object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const NodeControl& x) const;

    /*!
     * @brief This function sets a value in member cmd_node
     * @param _cmd_node New value for member cmd_node
     */
    eProsima_user_DllExport void cmd_node(
            CmdNode _cmd_node);

    /*!
     * @brief This function returns the value of member cmd_node
     * @return Value of member cmd_node
     */
    eProsima_user_DllExport CmdNode cmd_node() const;

    /*!
     * @brief This function returns a reference to member cmd_node
     * @return Reference to member cmd_node
     */
    eProsima_user_DllExport CmdNode& cmd_node();


    /*!
     * @brief This function sets a value in member cmd_task
     * @param _cmd_task New value for member cmd_task
     */
    eProsima_user_DllExport void cmd_task(
            CmdTask _cmd_task);

    /*!
     * @brief This function returns the value of member cmd_task
     * @return Value of member cmd_task
     */
    eProsima_user_DllExport CmdTask cmd_task() const;

    /*!
     * @brief This function returns a reference to member cmd_task
     * @return Reference to member cmd_task
     */
    eProsima_user_DllExport CmdTask& cmd_task();


    /*!
     * @brief This function copies the value in member target_node
     * @param _target_node New value to be copied in member target_node
     */
    eProsima_user_DllExport void target_node(
            const std::string& _target_node);

    /*!
     * @brief This function moves the value in member target_node
     * @param _target_node New value to be moved in member target_node
     */
    eProsima_user_DllExport void target_node(
            std::string&& _target_node);

    /*!
     * @brief This function returns a constant reference to member target_node
     * @return Constant reference to member target_node
     */
    eProsima_user_DllExport const std::string& target_node() const;

    /*!
     * @brief This function returns a copy of the target_node member
     * @return Copy of the target_node member
     */
    eProsima_user_DllExport std::string target_node();


    /*!
     * @brief This function sets a value in member task_id
     * @param _task_id New value for member task_id
     */
    eProsima_user_DllExport void task_id(
            int32_t _task_id);

    /*!
     * @brief This function returns the value of member task_id
     * @return Value of member task_id
     */
    eProsima_user_DllExport int32_t task_id() const;

    /*!
     * @brief This function returns a reference to member task_id
     * @return Reference to member task_id
     */
    eProsima_user_DllExport int32_t& task_id();


    /*!
     * @brief This function copies the value in member source_node
     * @param _source_node New value to be copied in member source_node
     */
    eProsima_user_DllExport void source_node(
            const std::string& _source_node);

    /*!
     * @brief This function moves the value in member source_node
     * @param _source_node New value to be moved in member source_node
     */
    eProsima_user_DllExport void source_node(
            std::string&& _source_node);

    /*!
     * @brief This function returns a constant reference to member source_node
     * @return Constant reference to member source_node
     */
    eProsima_user_DllExport const std::string& source_node() const;

    /*!
     * @brief This function returns a copy of the source_node member
     * @return Copy of the source_node member
     */
    eProsima_user_DllExport std::string source_node();

    /*!
     * @brief This function returns the implementation
     * @return Pointer to implementation
     */
    NodeControlImpl* get_impl() const;

protected:

    NodeControlImpl* impl_;
    friend class NodeControlImpl;

};
/*!
 * @brief This class represents the structure GeoLocation defined by the user in the IDL file.
 * @ingroup types
 */
class GeoLocation
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport GeoLocation();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~GeoLocation();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object GeoLocation that will be copied.
     */
    eProsima_user_DllExport GeoLocation(
            const GeoLocation& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object GeoLocation that will be copied.
     */
    eProsima_user_DllExport GeoLocation(
            GeoLocation&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object GeoLocation that will be copied.
     */
    eProsima_user_DllExport GeoLocation& operator =(
            const GeoLocation& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object GeoLocation that will be copied.
     */
    eProsima_user_DllExport GeoLocation& operator =(
            GeoLocation&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x GeoLocation object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const GeoLocation& x) const;

    /*!
     * @brief Comparison operator.
     * @param x GeoLocation object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const GeoLocation& x) const;

    /*!
     * @brief This function copies the value in member continent
     * @param _continent New value to be copied in member continent
     */
    eProsima_user_DllExport void continent(
            const std::string& _continent);

    /*!
     * @brief This function moves the value in member continent
     * @param _continent New value to be moved in member continent
     */
    eProsima_user_DllExport void continent(
            std::string&& _continent);

    /*!
     * @brief This function returns a constant reference to member continent
     * @return Constant reference to member continent
     */
    eProsima_user_DllExport const std::string& continent() const;

    /*!
     * @brief This function returns a copy of the continent member
     * @return Copy of the continent member
     */
    eProsima_user_DllExport std::string continent();


    /*!
     * @brief This function copies the value in member region
     * @param _region New value to be copied in member region
     */
    eProsima_user_DllExport void region(
            const std::string& _region);

    /*!
     * @brief This function moves the value in member region
     * @param _region New value to be moved in member region
     */
    eProsima_user_DllExport void region(
            std::string&& _region);

    /*!
     * @brief This function returns a constant reference to member region
     * @return Constant reference to member region
     */
    eProsima_user_DllExport const std::string& region() const;

    /*!
     * @brief This function returns a copy of the region member
     * @return Copy of the region member
     */
    eProsima_user_DllExport std::string region();

protected:

    GeoLocationImpl* impl_;
    friend class GeoLocationImpl;
    friend class UserInput;

};
/*!
 * @brief This class represents the structure UserInput defined by the user in the IDL file.
 * @ingroup types
 */
class UserInput
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport UserInput();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~UserInput();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object UserInput that will be copied.
     */
    eProsima_user_DllExport UserInput(
            const UserInput& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object UserInput that will be copied.
     */
    eProsima_user_DllExport UserInput(
            UserInput&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object UserInput that will be copied.
     */
    eProsima_user_DllExport UserInput& operator =(
            const UserInput& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object UserInput that will be copied.
     */
    eProsima_user_DllExport UserInput& operator =(
            UserInput&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x UserInput object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const UserInput& x) const;

    /*!
     * @brief Comparison operator.
     * @param x UserInput object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const UserInput& x) const;

    /*!
     * @brief This function copies the value in member problem_description
     * @param _problem_description New value to be copied in member problem_description
     */
    eProsima_user_DllExport void problem_description(
            const std::string& _problem_description);

    /*!
     * @brief This function moves the value in member problem_description
     * @param _problem_description New value to be moved in member problem_description
     */
    eProsima_user_DllExport void problem_description(
            std::string&& _problem_description);

    /*!
     * @brief This function returns a constant reference to member problem_description
     * @return Constant reference to member problem_description
     */
    eProsima_user_DllExport const std::string& problem_description() const;

    /*!
     * @brief This function returns a copy of the problem_description member
     * @return Copy of the problem_description member
     */
    eProsima_user_DllExport std::string problem_description();

    /*!
     * @brief This function copies the value in member geo_location
     * @param _geo_location New value to be copied in member geo_location
     */
    eProsima_user_DllExport void geo_location(
            const GeoLocation& _geo_location);

    /*!
     * @brief This function moves the value in member geo_location
     * @param _geo_location New value to be moved in member geo_location
     */
    eProsima_user_DllExport void geo_location(
            GeoLocation&& _geo_location);

    /*!
     * @brief This function returns a constant reference to member geo_location
     * @return Constant reference to member geo_location
     */
    eProsima_user_DllExport const GeoLocationImpl& geo_location() const;

    /*!
     * @brief This function returns a reference to member geo_location
     * @return Reference to member geo_location
     */
    eProsima_user_DllExport GeoLocationImpl& geo_location();


    /*!
     * @brief This function sets a value in member task_id
     * @param _task_id New value for member task_id
     */
    eProsima_user_DllExport void task_id(
            int32_t _task_id);

    /*!
     * @brief This function returns the value of member task_id
     * @return Value of member task_id
     */
    eProsima_user_DllExport int32_t task_id() const;

    /*!
     * @brief This function returns a reference to member task_id
     * @return Reference to member task_id
     */
    eProsima_user_DllExport int32_t& task_id();

    /*!
     * @brief This function returns the implementation
     * @return Pointer to implementation
     */
    UserInputImpl* get_impl();

    /*!
     * @brief This function retrives the implementation type info
     * @return Reference to the typeid
     */
    static const std::type_info& impl_typeinfo();

protected:

    UserInputImpl* impl_;
    friend class UserInputImpl;

};
/*!
 * @brief This class represents the structure EncodedTask defined by the user in the IDL file.
 * @ingroup types
 */
class EncodedTask
{
public:

    using impl_type = EncodedTaskImpl;

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport EncodedTask();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~EncodedTask();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object EncodedTask that will be copied.
     */
    eProsima_user_DllExport EncodedTask(
            const EncodedTask& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object EncodedTask that will be copied.
     */
    eProsima_user_DllExport EncodedTask(
            EncodedTask&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object EncodedTask that will be copied.
     */
    eProsima_user_DllExport EncodedTask& operator =(
            const EncodedTask& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object EncodedTask that will be copied.
     */
    eProsima_user_DllExport EncodedTask& operator =(
            EncodedTask&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x EncodedTask object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const EncodedTask& x) const;

    /*!
     * @brief Comparison operator.
     * @param x EncodedTask object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const EncodedTask& x) const;

    /*!
     * @brief This function copies the value in member keywords
     * @param _keywords New value to be copied in member keywords
     */
    eProsima_user_DllExport void keywords(
            const std::vector<std::string>& _keywords);

    /*!
     * @brief This function moves the value in member keywords
     * @param _keywords New value to be moved in member keywords
     */
    eProsima_user_DllExport void keywords(
            std::vector<std::string>&& _keywords);

    /*!
     * @brief This function returns a constant reference to member keywords
     * @return Constant reference to member keywords
     */
    eProsima_user_DllExport const std::vector<std::string>& keywords() const;

    /*!
     * @brief This function returns a reference to member keywords
     * @return Reference to member keywords
     */
    eProsima_user_DllExport std::vector<std::string>& keywords();


    /*!
     * @brief This function sets a value in member task_id
     * @param _task_id New value for member task_id
     */
    eProsima_user_DllExport void task_id(
            int32_t _task_id);

    /*!
     * @brief This function returns the value of member task_id
     * @return Value of member task_id
     */
    eProsima_user_DllExport int32_t task_id() const;

    /*!
     * @brief This function returns a reference to member task_id
     * @return Reference to member task_id
     */
    eProsima_user_DllExport int32_t& task_id();

    /*!
     * @brief This function returns the implementation
     * @return Pointer to implementation
     */
    EncodedTaskImpl* get_impl();

    /*!
     * @brief This function retrives the implementation type info
     * @return Reference to the typeid
     */
    static const std::type_info& impl_typeinfo();

protected:

    EncodedTaskImpl* impl_;
    friend class EncodedTaskImpl;

};
/*!
 * @brief This class represents the structure MLModel defined by the user in the IDL file.
 * @ingroup types
 */
class MLModel
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MLModel();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MLModel();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MLModel that will be copied.
     */
    eProsima_user_DllExport MLModel(
            const MLModel& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MLModel that will be copied.
     */
    eProsima_user_DllExport MLModel(
            MLModel&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MLModel that will be copied.
     */
    eProsima_user_DllExport MLModel& operator =(
            const MLModel& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MLModel that will be copied.
     */
    eProsima_user_DllExport MLModel& operator =(
            MLModel&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MLModel object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MLModel& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MLModel object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MLModel& x) const;

    /*!
     * @brief This function copies the value in member model_path
     * @param _model_path New value to be copied in member model_path
     */
    eProsima_user_DllExport void model_path(
            const std::string& _model_path);

    /*!
     * @brief This function moves the value in member model_path
     * @param _model_path New value to be moved in member model_path
     */
    eProsima_user_DllExport void model_path(
            std::string&& _model_path);

    /*!
     * @brief This function returns a constant reference to member model_path
     * @return Constant reference to member model_path
     */
    eProsima_user_DllExport const std::string& model_path() const;

    /*!
     * @brief This function returns a copy of the model_path member
     * @return Copy of the model_path member
     */
    eProsima_user_DllExport std::string model_path();


    /*!
     * @brief This function copies the value in member model
     * @param _model New value to be copied in member model
     */
    eProsima_user_DllExport void model(
            const std::string& _model);

    /*!
     * @brief This function moves the value in member model
     * @param _model New value to be moved in member model
     */
    eProsima_user_DllExport void model(
            std::string&& _model);

    /*!
     * @brief This function returns a constant reference to member model
     * @return Constant reference to member model
     */
    eProsima_user_DllExport const std::string& model() const;

    /*!
     * @brief This function returns a copy of the model member
     * @return Copy of the model member
     */
    eProsima_user_DllExport std::string model();


    /*!
     * @brief This function copies the value in member model_properties_path
     * @param _model_properties_path New value to be copied in member model_properties_path
     */
    eProsima_user_DllExport void model_properties_path(
            const std::string& _model_properties_path);

    /*!
     * @brief This function moves the value in member model_properties_path
     * @param _model_properties_path New value to be moved in member model_properties_path
     */
    eProsima_user_DllExport void model_properties_path(
            std::string&& _model_properties_path);

    /*!
     * @brief This function returns a constant reference to member model_properties_path
     * @return Constant reference to member model_properties_path
     */
    eProsima_user_DllExport const std::string& model_properties_path() const;

    /*!
     * @brief This function returns a copy of the model_properties_path member
     * @return Copy of the model_properties_path member
     */
    eProsima_user_DllExport std::string model_properties_path();


    /*!
     * @brief This function copies the value in member model_properties
     * @param _model_properties New value to be copied in member model_properties
     */
    eProsima_user_DllExport void model_properties(
            const std::string& _model_properties);

    /*!
     * @brief This function moves the value in member model_properties
     * @param _model_properties New value to be moved in member model_properties
     */
    eProsima_user_DllExport void model_properties(
            std::string&& _model_properties);

    /*!
     * @brief This function returns a constant reference to member model_properties
     * @return Constant reference to member model_properties
     */
    eProsima_user_DllExport const std::string& model_properties() const;

    /*!
     * @brief This function returns a copy of the model_properties member
     * @return Copy of the model_properties member
     */
    eProsima_user_DllExport std::string model_properties();


    /*!
     * @brief This function sets a value in member task_id
     * @param _task_id New value for member task_id
     */
    eProsima_user_DllExport void task_id(
            int32_t _task_id);

    /*!
     * @brief This function returns the value of member task_id
     * @return Value of member task_id
     */
    eProsima_user_DllExport int32_t task_id() const;

    /*!
     * @brief This function returns a reference to member task_id
     * @return Reference to member task_id
     */
    eProsima_user_DllExport int32_t& task_id();

    /*!
     * @brief This function returns the implementation
     * @return Pointer to implementation
     */
    MLModelImpl* get_impl();

    /*!
     * @brief This function retrives the implementation type info
     * @return Reference to the typeid
     */
    static const std::type_info& impl_typeinfo();

protected:

    MLModelImpl* impl_;
    friend class MLModelImpl;

};
/*!
 * @brief This class represents the structure HWResource defined by the user in the IDL file.
 * @ingroup types
 */
class HWResource
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport HWResource();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~HWResource();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object HWResource that will be copied.
     */
    eProsima_user_DllExport HWResource(
            const HWResource& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object HWResource that will be copied.
     */
    eProsima_user_DllExport HWResource(
            HWResource&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object HWResource that will be copied.
     */
    eProsima_user_DllExport HWResource& operator =(
            const HWResource& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object HWResource that will be copied.
     */
    eProsima_user_DllExport HWResource& operator =(
            HWResource&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x HWResource object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const HWResource& x) const;

    /*!
     * @brief Comparison operator.
     * @param x HWResource object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const HWResource& x) const;

    /*!
     * @brief This function copies the value in member hw_description
     * @param _hw_description New value to be copied in member hw_description
     */
    eProsima_user_DllExport void hw_description(
            const std::string& _hw_description);

    /*!
     * @brief This function moves the value in member hw_description
     * @param _hw_description New value to be moved in member hw_description
     */
    eProsima_user_DllExport void hw_description(
            std::string&& _hw_description);

    /*!
     * @brief This function returns a constant reference to member hw_description
     * @return Constant reference to member hw_description
     */
    eProsima_user_DllExport const std::string& hw_description() const;

    /*!
     * @brief This function returns a copy of the hw_description member
     * @return Copy of the hw_description member
     */
    eProsima_user_DllExport std::string hw_description();


    /*!
     * @brief This function sets a value in member power_consumption
     * @param _power_consumption New value for member power_consumption
     */
    eProsima_user_DllExport void power_consumption(
            double _power_consumption);

    /*!
     * @brief This function returns the value of member power_consumption
     * @return Value of member power_consumption
     */
    eProsima_user_DllExport double power_consumption() const;

    /*!
     * @brief This function returns a reference to member power_consumption
     * @return Reference to member power_consumption
     */
    eProsima_user_DllExport double& power_consumption();


    /*!
     * @brief This function sets a value in member task_id
     * @param _task_id New value for member task_id
     */
    eProsima_user_DllExport void task_id(
            int32_t _task_id);

    /*!
     * @brief This function returns the value of member task_id
     * @return Value of member task_id
     */
    eProsima_user_DllExport int32_t task_id() const;

    /*!
     * @brief This function returns a reference to member task_id
     * @return Reference to member task_id
     */
    eProsima_user_DllExport int32_t& task_id();

    /*!
     * @brief This function returns the implementation
     * @return Pointer to implementation
     */
    HWResourceImpl* get_impl();

    /*!
     * @brief This function retrives the implementation type info
     * @return Reference to the typeid
     */
    static const std::type_info& impl_typeinfo();

protected:

    HWResourceImpl* impl_;
    friend class HWResourceImpl;

};
/*!
 * @brief This class represents the structure CO2Footprint defined by the user in the IDL file.
 * @ingroup types
 */
class CO2Footprint
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport CO2Footprint();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~CO2Footprint();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object CO2Footprint that will be copied.
     */
    eProsima_user_DllExport CO2Footprint(
            const CO2Footprint& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object CO2Footprint that will be copied.
     */
    eProsima_user_DllExport CO2Footprint(
            CO2Footprint&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object CO2Footprint that will be copied.
     */
    eProsima_user_DllExport CO2Footprint& operator =(
            const CO2Footprint& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object CO2Footprint that will be copied.
     */
    eProsima_user_DllExport CO2Footprint& operator =(
            CO2Footprint&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x CO2Footprint object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const CO2Footprint& x) const;

    /*!
     * @brief Comparison operator.
     * @param x CO2Footprint object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const CO2Footprint& x) const;

    /*!
     * @brief This function sets a value in member co2_footprint
     * @param _co2_footprint New value for member co2_footprint
     */
    eProsima_user_DllExport void co2_footprint(
            double _co2_footprint);

    /*!
     * @brief This function returns the value of member co2_footprint
     * @return Value of member co2_footprint
     */
    eProsima_user_DllExport double co2_footprint() const;

    /*!
     * @brief This function returns a reference to member co2_footprint
     * @return Reference to member co2_footprint
     */
    eProsima_user_DllExport double& co2_footprint();


    /*!
     * @brief This function sets a value in member energy_consumption
     * @param _energy_consumption New value for member energy_consumption
     */
    eProsima_user_DllExport void energy_consumption(
            double _energy_consumption);

    /*!
     * @brief This function returns the value of member energy_consumption
     * @return Value of member energy_consumption
     */
    eProsima_user_DllExport double energy_consumption() const;

    /*!
     * @brief This function returns a reference to member energy_consumption
     * @return Reference to member energy_consumption
     */
    eProsima_user_DllExport double& energy_consumption();


    /*!
     * @brief This function sets a value in member carbon_intensity
     * @param _carbon_intensity New value for member carbon_intensity
     */
    eProsima_user_DllExport void carbon_intensity(
            double _carbon_intensity);

    /*!
     * @brief This function returns the value of member carbon_intensity
     * @return Value of member carbon_intensity
     */
    eProsima_user_DllExport double carbon_intensity() const;

    /*!
     * @brief This function returns a reference to member carbon_intensity
     * @return Reference to member carbon_intensity
     */
    eProsima_user_DllExport double& carbon_intensity();


    /*!
     * @brief This function sets a value in member task_id
     * @param _task_id New value for member task_id
     */
    eProsima_user_DllExport void task_id(
            int32_t _task_id);

    /*!
     * @brief This function returns the value of member task_id
     * @return Value of member task_id
     */
    eProsima_user_DllExport int32_t task_id() const;

    /*!
     * @brief This function returns a reference to member task_id
     * @return Reference to member task_id
     */
    eProsima_user_DllExport int32_t& task_id();

    /*!
     * @brief This function returns the implementation
     * @return Pointer to implementation
     */
    CO2FootprintImpl* get_impl();

    /*!
     * @brief This function retrives the implementation type info
     * @return Reference to the typeid
     */
    static const std::type_info& impl_typeinfo();

protected:

    CO2FootprintImpl* impl_;
    friend class CO2FootprintImpl;

};

} // namespace types

#endif // _FAST_DDS_TYPES_H_

