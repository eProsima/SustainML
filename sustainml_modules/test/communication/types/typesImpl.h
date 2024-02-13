// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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
 * @file typesImpl.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_TYPESIMPL_H_
#define _FAST_DDS_GENERATED_TYPESIMPL_H_

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
#if defined(TYPESIMPL_SOURCE)
#define TYPESIMPL_DllAPI __declspec( dllexport )
#else
#define TYPESIMPL_DllAPI __declspec( dllimport )
#endif // TYPESIMPL_SOURCE
#else
#define TYPESIMPL_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define TYPESIMPL_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;
} // namespace fastcdr
} // namespace eprosima



/*!
 * @brief This class represents the enumeration Status defined by the user in the IDL file.
 * @ingroup typesImpl
 */
enum Status : uint32_t
{
    NODE_INACTIVE,
    NODE_INITIALIZING,
    NODE_IDLE,
    NODE_RUNNING,
    NODE_ERROR,
    NODE_TERMINATING
};
/*!
 * @brief This class represents the enumeration TaskStatus defined by the user in the IDL file.
 * @ingroup typesImpl
 */
enum TaskStatus : uint32_t
{
    TASK_WAITING,
    TASK_RUNNING,
    TASK_ERROR,
    TASK_SUCCEEDED
};
/*!
 * @brief This class represents the enumeration ErrorCode defined by the user in the IDL file.
 * @ingroup typesImpl
 */
enum ErrorCode : uint32_t
{
    NO_ERROR,
    INTERNAL_ERROR
};
/*!
 * @brief This class represents the structure NodeStatusImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class NodeStatusImpl
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport NodeStatusImpl();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~NodeStatusImpl();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object NodeStatusImpl that will be copied.
     */
    eProsima_user_DllExport NodeStatusImpl(
            const NodeStatusImpl& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object NodeStatusImpl that will be copied.
     */
    eProsima_user_DllExport NodeStatusImpl(
            NodeStatusImpl&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object NodeStatusImpl that will be copied.
     */
    eProsima_user_DllExport NodeStatusImpl& operator =(
            const NodeStatusImpl& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object NodeStatusImpl that will be copied.
     */
    eProsima_user_DllExport NodeStatusImpl& operator =(
            NodeStatusImpl&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x NodeStatusImpl object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const NodeStatusImpl& x) const;

    /*!
     * @brief Comparison operator.
     * @param x NodeStatusImpl object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const NodeStatusImpl& x) const;

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
     * @brief This function returns a reference to member error_description
     * @return Reference to member error_description
     */
    eProsima_user_DllExport std::string& error_description();


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
     * @brief This function returns a reference to member node_name
     * @return Reference to member node_name
     */
    eProsima_user_DllExport std::string& node_name();

private:

    Status m_node_status{::NODE_INACTIVE};
    TaskStatus m_task_status{::TASK_WAITING};
    ErrorCode m_error_code{::NO_ERROR};
    int32_t m_task_id{0};
    std::string m_error_description;
    std::string m_node_name;

};
/*!
 * @brief This class represents the enumeration CmdNode defined by the user in the IDL file.
 * @ingroup typesImpl
 */
enum CmdNode : uint32_t
{
    NO_CMD_NODE,
    CMD_START_NODE,
    CMD_STOP_NODE,
    CMD_RESET_NODE,
    CMD_TERMINATE_NODE
};
/*!
 * @brief This class represents the enumeration CmdTask defined by the user in the IDL file.
 * @ingroup typesImpl
 */
enum CmdTask : uint32_t
{
    NO_CMD_TASK,
    CMD_STOP_TASK,
    CMD_RESET_TASK,
    CMD_PREEMPT_TASK,
    CMD_TERMINATE_TASK
};
/*!
 * @brief This class represents the structure NodeControlImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class NodeControlImpl
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport NodeControlImpl();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~NodeControlImpl();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object NodeControlImpl that will be copied.
     */
    eProsima_user_DllExport NodeControlImpl(
            const NodeControlImpl& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object NodeControlImpl that will be copied.
     */
    eProsima_user_DllExport NodeControlImpl(
            NodeControlImpl&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object NodeControlImpl that will be copied.
     */
    eProsima_user_DllExport NodeControlImpl& operator =(
            const NodeControlImpl& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object NodeControlImpl that will be copied.
     */
    eProsima_user_DllExport NodeControlImpl& operator =(
            NodeControlImpl&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x NodeControlImpl object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const NodeControlImpl& x) const;

    /*!
     * @brief Comparison operator.
     * @param x NodeControlImpl object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const NodeControlImpl& x) const;

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
     * @brief This function returns a reference to member target_node
     * @return Reference to member target_node
     */
    eProsima_user_DllExport std::string& target_node();


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
     * @brief This function returns a reference to member source_node
     * @return Reference to member source_node
     */
    eProsima_user_DllExport std::string& source_node();

private:

    CmdNode m_cmd_node{::NO_CMD_NODE};
    CmdTask m_cmd_task{::NO_CMD_TASK};
    std::string m_target_node;
    int32_t m_task_id{0};
    std::string m_source_node;

};
/*!
 * @brief This class represents the structure GeoLocationImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class GeoLocationImpl
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport GeoLocationImpl();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~GeoLocationImpl();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object GeoLocationImpl that will be copied.
     */
    eProsima_user_DllExport GeoLocationImpl(
            const GeoLocationImpl& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object GeoLocationImpl that will be copied.
     */
    eProsima_user_DllExport GeoLocationImpl(
            GeoLocationImpl&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object GeoLocationImpl that will be copied.
     */
    eProsima_user_DllExport GeoLocationImpl& operator =(
            const GeoLocationImpl& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object GeoLocationImpl that will be copied.
     */
    eProsima_user_DllExport GeoLocationImpl& operator =(
            GeoLocationImpl&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x GeoLocationImpl object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const GeoLocationImpl& x) const;

    /*!
     * @brief Comparison operator.
     * @param x GeoLocationImpl object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const GeoLocationImpl& x) const;

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
     * @brief This function returns a reference to member continent
     * @return Reference to member continent
     */
    eProsima_user_DllExport std::string& continent();


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
     * @brief This function returns a reference to member region
     * @return Reference to member region
     */
    eProsima_user_DllExport std::string& region();

private:

    std::string m_continent;
    std::string m_region;

};
/*!
 * @brief This class represents the structure UserInputImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class UserInputImpl
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport UserInputImpl();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~UserInputImpl();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object UserInputImpl that will be copied.
     */
    eProsima_user_DllExport UserInputImpl(
            const UserInputImpl& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object UserInputImpl that will be copied.
     */
    eProsima_user_DllExport UserInputImpl(
            UserInputImpl&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object UserInputImpl that will be copied.
     */
    eProsima_user_DllExport UserInputImpl& operator =(
            const UserInputImpl& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object UserInputImpl that will be copied.
     */
    eProsima_user_DllExport UserInputImpl& operator =(
            UserInputImpl&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x UserInputImpl object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const UserInputImpl& x) const;

    /*!
     * @brief Comparison operator.
     * @param x UserInputImpl object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const UserInputImpl& x) const;

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
     * @brief This function returns a reference to member problem_description
     * @return Reference to member problem_description
     */
    eProsima_user_DllExport std::string& problem_description();


    /*!
     * @brief This function copies the value in member geo_location
     * @param _geo_location New value to be copied in member geo_location
     */
    eProsima_user_DllExport void geo_location(
            const GeoLocationImpl& _geo_location);

    /*!
     * @brief This function moves the value in member geo_location
     * @param _geo_location New value to be moved in member geo_location
     */
    eProsima_user_DllExport void geo_location(
            GeoLocationImpl&& _geo_location);

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

private:

    std::string m_problem_description;
    GeoLocationImpl m_geo_location;
    int32_t m_task_id{0};

};
/*!
 * @brief This class represents the structure EncodedTaskImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class EncodedTaskImpl
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport EncodedTaskImpl();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~EncodedTaskImpl();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object EncodedTaskImpl that will be copied.
     */
    eProsima_user_DllExport EncodedTaskImpl(
            const EncodedTaskImpl& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object EncodedTaskImpl that will be copied.
     */
    eProsima_user_DllExport EncodedTaskImpl(
            EncodedTaskImpl&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object EncodedTaskImpl that will be copied.
     */
    eProsima_user_DllExport EncodedTaskImpl& operator =(
            const EncodedTaskImpl& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object EncodedTaskImpl that will be copied.
     */
    eProsima_user_DllExport EncodedTaskImpl& operator =(
            EncodedTaskImpl&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x EncodedTaskImpl object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const EncodedTaskImpl& x) const;

    /*!
     * @brief Comparison operator.
     * @param x EncodedTaskImpl object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const EncodedTaskImpl& x) const;

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

private:

    std::vector<std::string> m_keywords;
    int32_t m_task_id{0};

};
/*!
 * @brief This class represents the structure MLModelImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class MLModelImpl
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport MLModelImpl();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~MLModelImpl();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object MLModelImpl that will be copied.
     */
    eProsima_user_DllExport MLModelImpl(
            const MLModelImpl& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object MLModelImpl that will be copied.
     */
    eProsima_user_DllExport MLModelImpl(
            MLModelImpl&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object MLModelImpl that will be copied.
     */
    eProsima_user_DllExport MLModelImpl& operator =(
            const MLModelImpl& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object MLModelImpl that will be copied.
     */
    eProsima_user_DllExport MLModelImpl& operator =(
            MLModelImpl&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x MLModelImpl object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const MLModelImpl& x) const;

    /*!
     * @brief Comparison operator.
     * @param x MLModelImpl object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const MLModelImpl& x) const;

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
     * @brief This function returns a reference to member model_path
     * @return Reference to member model_path
     */
    eProsima_user_DllExport std::string& model_path();


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
     * @brief This function returns a reference to member model
     * @return Reference to member model
     */
    eProsima_user_DllExport std::string& model();


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
     * @brief This function returns a reference to member model_properties_path
     * @return Reference to member model_properties_path
     */
    eProsima_user_DllExport std::string& model_properties_path();


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
     * @brief This function returns a reference to member model_properties
     * @return Reference to member model_properties
     */
    eProsima_user_DllExport std::string& model_properties();


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

private:

    std::string m_model_path;
    std::string m_model;
    std::string m_model_properties_path;
    std::string m_model_properties;
    int32_t m_task_id{0};

};
/*!
 * @brief This class represents the structure HWResourceImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class HWResourceImpl
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport HWResourceImpl();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~HWResourceImpl();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object HWResourceImpl that will be copied.
     */
    eProsima_user_DllExport HWResourceImpl(
            const HWResourceImpl& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object HWResourceImpl that will be copied.
     */
    eProsima_user_DllExport HWResourceImpl(
            HWResourceImpl&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object HWResourceImpl that will be copied.
     */
    eProsima_user_DllExport HWResourceImpl& operator =(
            const HWResourceImpl& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object HWResourceImpl that will be copied.
     */
    eProsima_user_DllExport HWResourceImpl& operator =(
            HWResourceImpl&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x HWResourceImpl object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const HWResourceImpl& x) const;

    /*!
     * @brief Comparison operator.
     * @param x HWResourceImpl object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const HWResourceImpl& x) const;

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
     * @brief This function returns a reference to member hw_description
     * @return Reference to member hw_description
     */
    eProsima_user_DllExport std::string& hw_description();


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

private:

    std::string m_hw_description;
    double m_power_consumption{0.0};
    int32_t m_task_id{0};

};
/*!
 * @brief This class represents the structure CO2FootprintImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class CO2FootprintImpl
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport CO2FootprintImpl();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~CO2FootprintImpl();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object CO2FootprintImpl that will be copied.
     */
    eProsima_user_DllExport CO2FootprintImpl(
            const CO2FootprintImpl& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object CO2FootprintImpl that will be copied.
     */
    eProsima_user_DllExport CO2FootprintImpl(
            CO2FootprintImpl&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object CO2FootprintImpl that will be copied.
     */
    eProsima_user_DllExport CO2FootprintImpl& operator =(
            const CO2FootprintImpl& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object CO2FootprintImpl that will be copied.
     */
    eProsima_user_DllExport CO2FootprintImpl& operator =(
            CO2FootprintImpl&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x CO2FootprintImpl object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const CO2FootprintImpl& x) const;

    /*!
     * @brief Comparison operator.
     * @param x CO2FootprintImpl object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const CO2FootprintImpl& x) const;

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

private:

    double m_co2_footprint{0.0};
    double m_energy_consumption{0.0};
    double m_carbon_intensity{0.0};
    int32_t m_task_id{0};

};

#endif // _FAST_DDS_GENERATED_TYPESIMPL_H_
