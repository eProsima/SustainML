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
 * @file typesImpl.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "typesImpl.h"
#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


NodeStatusImpl::NodeStatusImpl()
{

}

NodeStatusImpl::~NodeStatusImpl()
{
}

NodeStatusImpl::NodeStatusImpl(
        const NodeStatusImpl& x)
{
    m_node_status = x.m_node_status;
    m_task_status = x.m_task_status;
    m_error_code = x.m_error_code;
    m_task_id = x.m_task_id;
    m_error_description = x.m_error_description;
    m_node_name = x.m_node_name;
}

NodeStatusImpl::NodeStatusImpl(
        NodeStatusImpl&& x) noexcept
{
    m_node_status = x.m_node_status;
    m_task_status = x.m_task_status;
    m_error_code = x.m_error_code;
    m_task_id = x.m_task_id;
    m_error_description = std::move(x.m_error_description);
    m_node_name = std::move(x.m_node_name);
}

NodeStatusImpl& NodeStatusImpl::operator =(
        const NodeStatusImpl& x)
{

    m_node_status = x.m_node_status;
    m_task_status = x.m_task_status;
    m_error_code = x.m_error_code;
    m_task_id = x.m_task_id;
    m_error_description = x.m_error_description;
    m_node_name = x.m_node_name;

    return *this;
}

NodeStatusImpl& NodeStatusImpl::operator =(
        NodeStatusImpl&& x) noexcept
{

    m_node_status = x.m_node_status;
    m_task_status = x.m_task_status;
    m_error_code = x.m_error_code;
    m_task_id = x.m_task_id;
    m_error_description = std::move(x.m_error_description);
    m_node_name = std::move(x.m_node_name);

    return *this;
}

bool NodeStatusImpl::operator ==(
        const NodeStatusImpl& x) const
{
    return (m_node_status == x.m_node_status &&
           m_task_status == x.m_task_status &&
           m_error_code == x.m_error_code &&
           m_task_id == x.m_task_id &&
           m_error_description == x.m_error_description &&
           m_node_name == x.m_node_name);
}

bool NodeStatusImpl::operator !=(
        const NodeStatusImpl& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function sets a value in member node_status
 * @param _node_status New value for member node_status
 */
void NodeStatusImpl::node_status(
        Status _node_status)
{
    m_node_status = _node_status;
}

/*!
 * @brief This function returns the value of member node_status
 * @return Value of member node_status
 */
Status NodeStatusImpl::node_status() const
{
    return m_node_status;
}

/*!
 * @brief This function returns a reference to member node_status
 * @return Reference to member node_status
 */
Status& NodeStatusImpl::node_status()
{
    return m_node_status;
}


/*!
 * @brief This function sets a value in member task_status
 * @param _task_status New value for member task_status
 */
void NodeStatusImpl::task_status(
        TaskStatus _task_status)
{
    m_task_status = _task_status;
}

/*!
 * @brief This function returns the value of member task_status
 * @return Value of member task_status
 */
TaskStatus NodeStatusImpl::task_status() const
{
    return m_task_status;
}

/*!
 * @brief This function returns a reference to member task_status
 * @return Reference to member task_status
 */
TaskStatus& NodeStatusImpl::task_status()
{
    return m_task_status;
}


/*!
 * @brief This function sets a value in member error_code
 * @param _error_code New value for member error_code
 */
void NodeStatusImpl::error_code(
        ErrorCode _error_code)
{
    m_error_code = _error_code;
}

/*!
 * @brief This function returns the value of member error_code
 * @return Value of member error_code
 */
ErrorCode NodeStatusImpl::error_code() const
{
    return m_error_code;
}

/*!
 * @brief This function returns a reference to member error_code
 * @return Reference to member error_code
 */
ErrorCode& NodeStatusImpl::error_code()
{
    return m_error_code;
}


/*!
 * @brief This function sets a value in member task_id
 * @param _task_id New value for member task_id
 */
void NodeStatusImpl::task_id(
        int32_t _task_id)
{
    m_task_id = _task_id;
}

/*!
 * @brief This function returns the value of member task_id
 * @return Value of member task_id
 */
int32_t NodeStatusImpl::task_id() const
{
    return m_task_id;
}

/*!
 * @brief This function returns a reference to member task_id
 * @return Reference to member task_id
 */
int32_t& NodeStatusImpl::task_id()
{
    return m_task_id;
}


/*!
 * @brief This function copies the value in member error_description
 * @param _error_description New value to be copied in member error_description
 */
void NodeStatusImpl::error_description(
        const std::string& _error_description)
{
    m_error_description = _error_description;
}

/*!
 * @brief This function moves the value in member error_description
 * @param _error_description New value to be moved in member error_description
 */
void NodeStatusImpl::error_description(
        std::string&& _error_description)
{
    m_error_description = std::move(_error_description);
}

/*!
 * @brief This function returns a constant reference to member error_description
 * @return Constant reference to member error_description
 */
const std::string& NodeStatusImpl::error_description() const
{
    return m_error_description;
}

/*!
 * @brief This function returns a reference to member error_description
 * @return Reference to member error_description
 */
std::string& NodeStatusImpl::error_description()
{
    return m_error_description;
}


/*!
 * @brief This function copies the value in member node_name
 * @param _node_name New value to be copied in member node_name
 */
void NodeStatusImpl::node_name(
        const std::string& _node_name)
{
    m_node_name = _node_name;
}

/*!
 * @brief This function moves the value in member node_name
 * @param _node_name New value to be moved in member node_name
 */
void NodeStatusImpl::node_name(
        std::string&& _node_name)
{
    m_node_name = std::move(_node_name);
}

/*!
 * @brief This function returns a constant reference to member node_name
 * @return Constant reference to member node_name
 */
const std::string& NodeStatusImpl::node_name() const
{
    return m_node_name;
}

/*!
 * @brief This function returns a reference to member node_name
 * @return Reference to member node_name
 */
std::string& NodeStatusImpl::node_name()
{
    return m_node_name;
}




NodeControlImpl::NodeControlImpl()
{

}

NodeControlImpl::~NodeControlImpl()
{
}

NodeControlImpl::NodeControlImpl(
        const NodeControlImpl& x)
{
    m_cmd_node = x.m_cmd_node;
    m_cmd_task = x.m_cmd_task;
    m_target_node = x.m_target_node;
    m_task_id = x.m_task_id;
    m_source_node = x.m_source_node;
}

NodeControlImpl::NodeControlImpl(
        NodeControlImpl&& x) noexcept
{
    m_cmd_node = x.m_cmd_node;
    m_cmd_task = x.m_cmd_task;
    m_target_node = std::move(x.m_target_node);
    m_task_id = x.m_task_id;
    m_source_node = std::move(x.m_source_node);
}

NodeControlImpl& NodeControlImpl::operator =(
        const NodeControlImpl& x)
{

    m_cmd_node = x.m_cmd_node;
    m_cmd_task = x.m_cmd_task;
    m_target_node = x.m_target_node;
    m_task_id = x.m_task_id;
    m_source_node = x.m_source_node;

    return *this;
}

NodeControlImpl& NodeControlImpl::operator =(
        NodeControlImpl&& x) noexcept
{

    m_cmd_node = x.m_cmd_node;
    m_cmd_task = x.m_cmd_task;
    m_target_node = std::move(x.m_target_node);
    m_task_id = x.m_task_id;
    m_source_node = std::move(x.m_source_node);

    return *this;
}

bool NodeControlImpl::operator ==(
        const NodeControlImpl& x) const
{
    return (m_cmd_node == x.m_cmd_node &&
           m_cmd_task == x.m_cmd_task &&
           m_target_node == x.m_target_node &&
           m_task_id == x.m_task_id &&
           m_source_node == x.m_source_node);
}

bool NodeControlImpl::operator !=(
        const NodeControlImpl& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function sets a value in member cmd_node
 * @param _cmd_node New value for member cmd_node
 */
void NodeControlImpl::cmd_node(
        CmdNode _cmd_node)
{
    m_cmd_node = _cmd_node;
}

/*!
 * @brief This function returns the value of member cmd_node
 * @return Value of member cmd_node
 */
CmdNode NodeControlImpl::cmd_node() const
{
    return m_cmd_node;
}

/*!
 * @brief This function returns a reference to member cmd_node
 * @return Reference to member cmd_node
 */
CmdNode& NodeControlImpl::cmd_node()
{
    return m_cmd_node;
}


/*!
 * @brief This function sets a value in member cmd_task
 * @param _cmd_task New value for member cmd_task
 */
void NodeControlImpl::cmd_task(
        CmdTask _cmd_task)
{
    m_cmd_task = _cmd_task;
}

/*!
 * @brief This function returns the value of member cmd_task
 * @return Value of member cmd_task
 */
CmdTask NodeControlImpl::cmd_task() const
{
    return m_cmd_task;
}

/*!
 * @brief This function returns a reference to member cmd_task
 * @return Reference to member cmd_task
 */
CmdTask& NodeControlImpl::cmd_task()
{
    return m_cmd_task;
}


/*!
 * @brief This function copies the value in member target_node
 * @param _target_node New value to be copied in member target_node
 */
void NodeControlImpl::target_node(
        const std::string& _target_node)
{
    m_target_node = _target_node;
}

/*!
 * @brief This function moves the value in member target_node
 * @param _target_node New value to be moved in member target_node
 */
void NodeControlImpl::target_node(
        std::string&& _target_node)
{
    m_target_node = std::move(_target_node);
}

/*!
 * @brief This function returns a constant reference to member target_node
 * @return Constant reference to member target_node
 */
const std::string& NodeControlImpl::target_node() const
{
    return m_target_node;
}

/*!
 * @brief This function returns a reference to member target_node
 * @return Reference to member target_node
 */
std::string& NodeControlImpl::target_node()
{
    return m_target_node;
}


/*!
 * @brief This function sets a value in member task_id
 * @param _task_id New value for member task_id
 */
void NodeControlImpl::task_id(
        int32_t _task_id)
{
    m_task_id = _task_id;
}

/*!
 * @brief This function returns the value of member task_id
 * @return Value of member task_id
 */
int32_t NodeControlImpl::task_id() const
{
    return m_task_id;
}

/*!
 * @brief This function returns a reference to member task_id
 * @return Reference to member task_id
 */
int32_t& NodeControlImpl::task_id()
{
    return m_task_id;
}


/*!
 * @brief This function copies the value in member source_node
 * @param _source_node New value to be copied in member source_node
 */
void NodeControlImpl::source_node(
        const std::string& _source_node)
{
    m_source_node = _source_node;
}

/*!
 * @brief This function moves the value in member source_node
 * @param _source_node New value to be moved in member source_node
 */
void NodeControlImpl::source_node(
        std::string&& _source_node)
{
    m_source_node = std::move(_source_node);
}

/*!
 * @brief This function returns a constant reference to member source_node
 * @return Constant reference to member source_node
 */
const std::string& NodeControlImpl::source_node() const
{
    return m_source_node;
}

/*!
 * @brief This function returns a reference to member source_node
 * @return Reference to member source_node
 */
std::string& NodeControlImpl::source_node()
{
    return m_source_node;
}


GeoLocationImpl::GeoLocationImpl()
{

}

GeoLocationImpl::~GeoLocationImpl()
{
}

GeoLocationImpl::GeoLocationImpl(
        const GeoLocationImpl& x)
{
    m_continent = x.m_continent;
    m_region = x.m_region;
}

GeoLocationImpl::GeoLocationImpl(
        GeoLocationImpl&& x) noexcept
{
    m_continent = std::move(x.m_continent);
    m_region = std::move(x.m_region);
}

GeoLocationImpl& GeoLocationImpl::operator =(
        const GeoLocationImpl& x)
{

    m_continent = x.m_continent;
    m_region = x.m_region;

    return *this;
}

GeoLocationImpl& GeoLocationImpl::operator =(
        GeoLocationImpl&& x) noexcept
{

    m_continent = std::move(x.m_continent);
    m_region = std::move(x.m_region);

    return *this;
}

bool GeoLocationImpl::operator ==(
        const GeoLocationImpl& x) const
{
    return (m_continent == x.m_continent &&
           m_region == x.m_region);
}

bool GeoLocationImpl::operator !=(
        const GeoLocationImpl& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member continent
 * @param _continent New value to be copied in member continent
 */
void GeoLocationImpl::continent(
        const std::string& _continent)
{
    m_continent = _continent;
}

/*!
 * @brief This function moves the value in member continent
 * @param _continent New value to be moved in member continent
 */
void GeoLocationImpl::continent(
        std::string&& _continent)
{
    m_continent = std::move(_continent);
}

/*!
 * @brief This function returns a constant reference to member continent
 * @return Constant reference to member continent
 */
const std::string& GeoLocationImpl::continent() const
{
    return m_continent;
}

/*!
 * @brief This function returns a reference to member continent
 * @return Reference to member continent
 */
std::string& GeoLocationImpl::continent()
{
    return m_continent;
}


/*!
 * @brief This function copies the value in member region
 * @param _region New value to be copied in member region
 */
void GeoLocationImpl::region(
        const std::string& _region)
{
    m_region = _region;
}

/*!
 * @brief This function moves the value in member region
 * @param _region New value to be moved in member region
 */
void GeoLocationImpl::region(
        std::string&& _region)
{
    m_region = std::move(_region);
}

/*!
 * @brief This function returns a constant reference to member region
 * @return Constant reference to member region
 */
const std::string& GeoLocationImpl::region() const
{
    return m_region;
}

/*!
 * @brief This function returns a reference to member region
 * @return Reference to member region
 */
std::string& GeoLocationImpl::region()
{
    return m_region;
}


UserInputImpl::UserInputImpl()
{

}

UserInputImpl::~UserInputImpl()
{
}

UserInputImpl::UserInputImpl(
        const UserInputImpl& x)
{
    m_problem_description = x.m_problem_description;
    m_geo_location = x.m_geo_location;
    m_task_id = x.m_task_id;
}

UserInputImpl::UserInputImpl(
        UserInputImpl&& x) noexcept
{
    m_problem_description = std::move(x.m_problem_description);
    m_geo_location = std::move(x.m_geo_location);
    m_task_id = x.m_task_id;
}

UserInputImpl& UserInputImpl::operator =(
        const UserInputImpl& x)
{

    m_problem_description = x.m_problem_description;
    m_geo_location = x.m_geo_location;
    m_task_id = x.m_task_id;

    return *this;
}

UserInputImpl& UserInputImpl::operator =(
        UserInputImpl&& x) noexcept
{

    m_problem_description = std::move(x.m_problem_description);
    m_geo_location = std::move(x.m_geo_location);
    m_task_id = x.m_task_id;

    return *this;
}

bool UserInputImpl::operator ==(
        const UserInputImpl& x) const
{
    return (m_problem_description == x.m_problem_description &&
           m_geo_location == x.m_geo_location &&
           m_task_id == x.m_task_id);
}

bool UserInputImpl::operator !=(
        const UserInputImpl& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member problem_description
 * @param _problem_description New value to be copied in member problem_description
 */
void UserInputImpl::problem_description(
        const std::string& _problem_description)
{
    m_problem_description = _problem_description;
}

/*!
 * @brief This function moves the value in member problem_description
 * @param _problem_description New value to be moved in member problem_description
 */
void UserInputImpl::problem_description(
        std::string&& _problem_description)
{
    m_problem_description = std::move(_problem_description);
}

/*!
 * @brief This function returns a constant reference to member problem_description
 * @return Constant reference to member problem_description
 */
const std::string& UserInputImpl::problem_description() const
{
    return m_problem_description;
}

/*!
 * @brief This function returns a reference to member problem_description
 * @return Reference to member problem_description
 */
std::string& UserInputImpl::problem_description()
{
    return m_problem_description;
}


/*!
 * @brief This function copies the value in member geo_location
 * @param _geo_location New value to be copied in member geo_location
 */
void UserInputImpl::geo_location(
        const GeoLocationImpl& _geo_location)
{
    m_geo_location = _geo_location;
}

/*!
 * @brief This function moves the value in member geo_location
 * @param _geo_location New value to be moved in member geo_location
 */
void UserInputImpl::geo_location(
        GeoLocationImpl&& _geo_location)
{
    m_geo_location = std::move(_geo_location);
}

/*!
 * @brief This function returns a constant reference to member geo_location
 * @return Constant reference to member geo_location
 */
const GeoLocationImpl& UserInputImpl::geo_location() const
{
    return m_geo_location;
}

/*!
 * @brief This function returns a reference to member geo_location
 * @return Reference to member geo_location
 */
GeoLocationImpl& UserInputImpl::geo_location()
{
    return m_geo_location;
}


/*!
 * @brief This function sets a value in member task_id
 * @param _task_id New value for member task_id
 */
void UserInputImpl::task_id(
        int32_t _task_id)
{
    m_task_id = _task_id;
}

/*!
 * @brief This function returns the value of member task_id
 * @return Value of member task_id
 */
int32_t UserInputImpl::task_id() const
{
    return m_task_id;
}

/*!
 * @brief This function returns a reference to member task_id
 * @return Reference to member task_id
 */
int32_t& UserInputImpl::task_id()
{
    return m_task_id;
}


EncodedTaskImpl::EncodedTaskImpl()
{

}

EncodedTaskImpl::~EncodedTaskImpl()
{
}

EncodedTaskImpl::EncodedTaskImpl(
        const EncodedTaskImpl& x)
{
    m_keywords = x.m_keywords;
    m_task_id = x.m_task_id;
}

EncodedTaskImpl::EncodedTaskImpl(
        EncodedTaskImpl&& x) noexcept
{
    m_keywords = std::move(x.m_keywords);
    m_task_id = x.m_task_id;
}

EncodedTaskImpl& EncodedTaskImpl::operator =(
        const EncodedTaskImpl& x)
{

    m_keywords = x.m_keywords;
    m_task_id = x.m_task_id;

    return *this;
}

EncodedTaskImpl& EncodedTaskImpl::operator =(
        EncodedTaskImpl&& x) noexcept
{

    m_keywords = std::move(x.m_keywords);
    m_task_id = x.m_task_id;

    return *this;
}

bool EncodedTaskImpl::operator ==(
        const EncodedTaskImpl& x) const
{
    return (m_keywords == x.m_keywords &&
           m_task_id == x.m_task_id);
}

bool EncodedTaskImpl::operator !=(
        const EncodedTaskImpl& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member keywords
 * @param _keywords New value to be copied in member keywords
 */
void EncodedTaskImpl::keywords(
        const std::vector<std::string>& _keywords)
{
    m_keywords = _keywords;
}

/*!
 * @brief This function moves the value in member keywords
 * @param _keywords New value to be moved in member keywords
 */
void EncodedTaskImpl::keywords(
        std::vector<std::string>&& _keywords)
{
    m_keywords = std::move(_keywords);
}

/*!
 * @brief This function returns a constant reference to member keywords
 * @return Constant reference to member keywords
 */
const std::vector<std::string>& EncodedTaskImpl::keywords() const
{
    return m_keywords;
}

/*!
 * @brief This function returns a reference to member keywords
 * @return Reference to member keywords
 */
std::vector<std::string>& EncodedTaskImpl::keywords()
{
    return m_keywords;
}


/*!
 * @brief This function sets a value in member task_id
 * @param _task_id New value for member task_id
 */
void EncodedTaskImpl::task_id(
        int32_t _task_id)
{
    m_task_id = _task_id;
}

/*!
 * @brief This function returns the value of member task_id
 * @return Value of member task_id
 */
int32_t EncodedTaskImpl::task_id() const
{
    return m_task_id;
}

/*!
 * @brief This function returns a reference to member task_id
 * @return Reference to member task_id
 */
int32_t& EncodedTaskImpl::task_id()
{
    return m_task_id;
}


MLModelImpl::MLModelImpl()
{

}

MLModelImpl::~MLModelImpl()
{
}

MLModelImpl::MLModelImpl(
        const MLModelImpl& x)
{
    m_model_path = x.m_model_path;
    m_model = x.m_model;
    m_model_properties_path = x.m_model_properties_path;
    m_model_properties = x.m_model_properties;
    m_task_id = x.m_task_id;
}

MLModelImpl::MLModelImpl(
        MLModelImpl&& x) noexcept
{
    m_model_path = std::move(x.m_model_path);
    m_model = std::move(x.m_model);
    m_model_properties_path = std::move(x.m_model_properties_path);
    m_model_properties = std::move(x.m_model_properties);
    m_task_id = x.m_task_id;
}

MLModelImpl& MLModelImpl::operator =(
        const MLModelImpl& x)
{

    m_model_path = x.m_model_path;
    m_model = x.m_model;
    m_model_properties_path = x.m_model_properties_path;
    m_model_properties = x.m_model_properties;
    m_task_id = x.m_task_id;

    return *this;
}

MLModelImpl& MLModelImpl::operator =(
        MLModelImpl&& x) noexcept
{

    m_model_path = std::move(x.m_model_path);
    m_model = std::move(x.m_model);
    m_model_properties_path = std::move(x.m_model_properties_path);
    m_model_properties = std::move(x.m_model_properties);
    m_task_id = x.m_task_id;

    return *this;
}

bool MLModelImpl::operator ==(
        const MLModelImpl& x) const
{
    return (m_model_path == x.m_model_path &&
           m_model == x.m_model &&
           m_model_properties_path == x.m_model_properties_path &&
           m_model_properties == x.m_model_properties &&
           m_task_id == x.m_task_id);
}

bool MLModelImpl::operator !=(
        const MLModelImpl& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member model_path
 * @param _model_path New value to be copied in member model_path
 */
void MLModelImpl::model_path(
        const std::string& _model_path)
{
    m_model_path = _model_path;
}

/*!
 * @brief This function moves the value in member model_path
 * @param _model_path New value to be moved in member model_path
 */
void MLModelImpl::model_path(
        std::string&& _model_path)
{
    m_model_path = std::move(_model_path);
}

/*!
 * @brief This function returns a constant reference to member model_path
 * @return Constant reference to member model_path
 */
const std::string& MLModelImpl::model_path() const
{
    return m_model_path;
}

/*!
 * @brief This function returns a reference to member model_path
 * @return Reference to member model_path
 */
std::string& MLModelImpl::model_path()
{
    return m_model_path;
}


/*!
 * @brief This function copies the value in member model
 * @param _model New value to be copied in member model
 */
void MLModelImpl::model(
        const std::string& _model)
{
    m_model = _model;
}

/*!
 * @brief This function moves the value in member model
 * @param _model New value to be moved in member model
 */
void MLModelImpl::model(
        std::string&& _model)
{
    m_model = std::move(_model);
}

/*!
 * @brief This function returns a constant reference to member model
 * @return Constant reference to member model
 */
const std::string& MLModelImpl::model() const
{
    return m_model;
}

/*!
 * @brief This function returns a reference to member model
 * @return Reference to member model
 */
std::string& MLModelImpl::model()
{
    return m_model;
}


/*!
 * @brief This function copies the value in member model_properties_path
 * @param _model_properties_path New value to be copied in member model_properties_path
 */
void MLModelImpl::model_properties_path(
        const std::string& _model_properties_path)
{
    m_model_properties_path = _model_properties_path;
}

/*!
 * @brief This function moves the value in member model_properties_path
 * @param _model_properties_path New value to be moved in member model_properties_path
 */
void MLModelImpl::model_properties_path(
        std::string&& _model_properties_path)
{
    m_model_properties_path = std::move(_model_properties_path);
}

/*!
 * @brief This function returns a constant reference to member model_properties_path
 * @return Constant reference to member model_properties_path
 */
const std::string& MLModelImpl::model_properties_path() const
{
    return m_model_properties_path;
}

/*!
 * @brief This function returns a reference to member model_properties_path
 * @return Reference to member model_properties_path
 */
std::string& MLModelImpl::model_properties_path()
{
    return m_model_properties_path;
}


/*!
 * @brief This function copies the value in member model_properties
 * @param _model_properties New value to be copied in member model_properties
 */
void MLModelImpl::model_properties(
        const std::string& _model_properties)
{
    m_model_properties = _model_properties;
}

/*!
 * @brief This function moves the value in member model_properties
 * @param _model_properties New value to be moved in member model_properties
 */
void MLModelImpl::model_properties(
        std::string&& _model_properties)
{
    m_model_properties = std::move(_model_properties);
}

/*!
 * @brief This function returns a constant reference to member model_properties
 * @return Constant reference to member model_properties
 */
const std::string& MLModelImpl::model_properties() const
{
    return m_model_properties;
}

/*!
 * @brief This function returns a reference to member model_properties
 * @return Reference to member model_properties
 */
std::string& MLModelImpl::model_properties()
{
    return m_model_properties;
}


/*!
 * @brief This function sets a value in member task_id
 * @param _task_id New value for member task_id
 */
void MLModelImpl::task_id(
        int32_t _task_id)
{
    m_task_id = _task_id;
}

/*!
 * @brief This function returns the value of member task_id
 * @return Value of member task_id
 */
int32_t MLModelImpl::task_id() const
{
    return m_task_id;
}

/*!
 * @brief This function returns a reference to member task_id
 * @return Reference to member task_id
 */
int32_t& MLModelImpl::task_id()
{
    return m_task_id;
}


HWResourceImpl::HWResourceImpl()
{

}

HWResourceImpl::~HWResourceImpl()
{
}

HWResourceImpl::HWResourceImpl(
        const HWResourceImpl& x)
{
    m_hw_description = x.m_hw_description;
    m_power_consumption = x.m_power_consumption;
    m_task_id = x.m_task_id;
}

HWResourceImpl::HWResourceImpl(
        HWResourceImpl&& x) noexcept
{
    m_hw_description = std::move(x.m_hw_description);
    m_power_consumption = x.m_power_consumption;
    m_task_id = x.m_task_id;
}

HWResourceImpl& HWResourceImpl::operator =(
        const HWResourceImpl& x)
{

    m_hw_description = x.m_hw_description;
    m_power_consumption = x.m_power_consumption;
    m_task_id = x.m_task_id;

    return *this;
}

HWResourceImpl& HWResourceImpl::operator =(
        HWResourceImpl&& x) noexcept
{

    m_hw_description = std::move(x.m_hw_description);
    m_power_consumption = x.m_power_consumption;
    m_task_id = x.m_task_id;

    return *this;
}

bool HWResourceImpl::operator ==(
        const HWResourceImpl& x) const
{
    return (m_hw_description == x.m_hw_description &&
           m_power_consumption == x.m_power_consumption &&
           m_task_id == x.m_task_id);
}

bool HWResourceImpl::operator !=(
        const HWResourceImpl& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member hw_description
 * @param _hw_description New value to be copied in member hw_description
 */
void HWResourceImpl::hw_description(
        const std::string& _hw_description)
{
    m_hw_description = _hw_description;
}

/*!
 * @brief This function moves the value in member hw_description
 * @param _hw_description New value to be moved in member hw_description
 */
void HWResourceImpl::hw_description(
        std::string&& _hw_description)
{
    m_hw_description = std::move(_hw_description);
}

/*!
 * @brief This function returns a constant reference to member hw_description
 * @return Constant reference to member hw_description
 */
const std::string& HWResourceImpl::hw_description() const
{
    return m_hw_description;
}

/*!
 * @brief This function returns a reference to member hw_description
 * @return Reference to member hw_description
 */
std::string& HWResourceImpl::hw_description()
{
    return m_hw_description;
}


/*!
 * @brief This function sets a value in member power_consumption
 * @param _power_consumption New value for member power_consumption
 */
void HWResourceImpl::power_consumption(
        double _power_consumption)
{
    m_power_consumption = _power_consumption;
}

/*!
 * @brief This function returns the value of member power_consumption
 * @return Value of member power_consumption
 */
double HWResourceImpl::power_consumption() const
{
    return m_power_consumption;
}

/*!
 * @brief This function returns a reference to member power_consumption
 * @return Reference to member power_consumption
 */
double& HWResourceImpl::power_consumption()
{
    return m_power_consumption;
}


/*!
 * @brief This function sets a value in member task_id
 * @param _task_id New value for member task_id
 */
void HWResourceImpl::task_id(
        int32_t _task_id)
{
    m_task_id = _task_id;
}

/*!
 * @brief This function returns the value of member task_id
 * @return Value of member task_id
 */
int32_t HWResourceImpl::task_id() const
{
    return m_task_id;
}

/*!
 * @brief This function returns a reference to member task_id
 * @return Reference to member task_id
 */
int32_t& HWResourceImpl::task_id()
{
    return m_task_id;
}


CO2FootprintImpl::CO2FootprintImpl()
{

}

CO2FootprintImpl::~CO2FootprintImpl()
{
}

CO2FootprintImpl::CO2FootprintImpl(
        const CO2FootprintImpl& x)
{
    m_co2_footprint = x.m_co2_footprint;
    m_energy_consumption = x.m_energy_consumption;
    m_carbon_intensity = x.m_carbon_intensity;
    m_task_id = x.m_task_id;
}

CO2FootprintImpl::CO2FootprintImpl(
        CO2FootprintImpl&& x) noexcept
{
    m_co2_footprint = x.m_co2_footprint;
    m_energy_consumption = x.m_energy_consumption;
    m_carbon_intensity = x.m_carbon_intensity;
    m_task_id = x.m_task_id;
}

CO2FootprintImpl& CO2FootprintImpl::operator =(
        const CO2FootprintImpl& x)
{

    m_co2_footprint = x.m_co2_footprint;
    m_energy_consumption = x.m_energy_consumption;
    m_carbon_intensity = x.m_carbon_intensity;
    m_task_id = x.m_task_id;

    return *this;
}

CO2FootprintImpl& CO2FootprintImpl::operator =(
        CO2FootprintImpl&& x) noexcept
{

    m_co2_footprint = x.m_co2_footprint;
    m_energy_consumption = x.m_energy_consumption;
    m_carbon_intensity = x.m_carbon_intensity;
    m_task_id = x.m_task_id;

    return *this;
}

bool CO2FootprintImpl::operator ==(
        const CO2FootprintImpl& x) const
{
    return (m_co2_footprint == x.m_co2_footprint &&
           m_energy_consumption == x.m_energy_consumption &&
           m_carbon_intensity == x.m_carbon_intensity &&
           m_task_id == x.m_task_id);
}

bool CO2FootprintImpl::operator !=(
        const CO2FootprintImpl& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function sets a value in member co2_footprint
 * @param _co2_footprint New value for member co2_footprint
 */
void CO2FootprintImpl::co2_footprint(
        double _co2_footprint)
{
    m_co2_footprint = _co2_footprint;
}

/*!
 * @brief This function returns the value of member co2_footprint
 * @return Value of member co2_footprint
 */
double CO2FootprintImpl::co2_footprint() const
{
    return m_co2_footprint;
}

/*!
 * @brief This function returns a reference to member co2_footprint
 * @return Reference to member co2_footprint
 */
double& CO2FootprintImpl::co2_footprint()
{
    return m_co2_footprint;
}


/*!
 * @brief This function sets a value in member energy_consumption
 * @param _energy_consumption New value for member energy_consumption
 */
void CO2FootprintImpl::energy_consumption(
        double _energy_consumption)
{
    m_energy_consumption = _energy_consumption;
}

/*!
 * @brief This function returns the value of member energy_consumption
 * @return Value of member energy_consumption
 */
double CO2FootprintImpl::energy_consumption() const
{
    return m_energy_consumption;
}

/*!
 * @brief This function returns a reference to member energy_consumption
 * @return Reference to member energy_consumption
 */
double& CO2FootprintImpl::energy_consumption()
{
    return m_energy_consumption;
}


/*!
 * @brief This function sets a value in member carbon_intensity
 * @param _carbon_intensity New value for member carbon_intensity
 */
void CO2FootprintImpl::carbon_intensity(
        double _carbon_intensity)
{
    m_carbon_intensity = _carbon_intensity;
}

/*!
 * @brief This function returns the value of member carbon_intensity
 * @return Value of member carbon_intensity
 */
double CO2FootprintImpl::carbon_intensity() const
{
    return m_carbon_intensity;
}

/*!
 * @brief This function returns a reference to member carbon_intensity
 * @return Reference to member carbon_intensity
 */
double& CO2FootprintImpl::carbon_intensity()
{
    return m_carbon_intensity;
}


/*!
 * @brief This function sets a value in member task_id
 * @param _task_id New value for member task_id
 */
void CO2FootprintImpl::task_id(
        int32_t _task_id)
{
    m_task_id = _task_id;
}

/*!
 * @brief This function returns the value of member task_id
 * @return Value of member task_id
 */
int32_t CO2FootprintImpl::task_id() const
{
    return m_task_id;
}

/*!
 * @brief This function returns a reference to member task_id
 * @return Reference to member task_id
 */
int32_t& CO2FootprintImpl::task_id()
{
    return m_task_id;
}


// Include auxiliary functions like for serializing/deserializing.
#include "typesImplCdrAux.ipp"
