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
 * @file typesImplPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastddsgen.
 */


#ifndef _FAST_DDS_GENERATED_TYPESIMPL_PUBSUBTYPES_H_
#define _FAST_DDS_GENERATED_TYPESIMPL_PUBSUBTYPES_H_

#include <fastdds/dds/core/policy/QosPolicies.hpp>
#include <fastdds/dds/topic/TopicDataType.hpp>
#include <fastdds/rtps/common/InstanceHandle.h>
#include <fastdds/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>

#include "typesImpl.h"


#if !defined(GEN_API_VER) || (GEN_API_VER != 2)
#error \
    Generated typesImpl is not compatible with current installed Fast DDS. Please, regenerate it with fastddsgen.
#endif  // GEN_API_VER


/*!
 * @brief This class represents the TopicDataType of the type NodeStatusImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class NodeStatusImplPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef NodeStatusImpl type;

    eProsima_user_DllExport NodeStatusImplPubSubType();

    eProsima_user_DllExport ~NodeStatusImplPubSubType() override;

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
    {
        return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override
    {
        return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    eProsima_user_DllExport void* createData() override;

    eProsima_user_DllExport void deleteData(
            void* data) override;

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
    eProsima_user_DllExport inline bool is_bounded() const override
    {
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
    eProsima_user_DllExport inline bool is_plain() const override
    {
        return false;
    }

    eProsima_user_DllExport inline bool is_plain(
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
    {
        static_cast<void>(data_representation);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        static_cast<void>(memory);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

};



/*!
 * @brief This class represents the TopicDataType of the type NodeControlImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class NodeControlImplPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef NodeControlImpl type;

    eProsima_user_DllExport NodeControlImplPubSubType();

    eProsima_user_DllExport ~NodeControlImplPubSubType() override;

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
    {
        return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override
    {
        return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    eProsima_user_DllExport void* createData() override;

    eProsima_user_DllExport void deleteData(
            void* data) override;

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
    eProsima_user_DllExport inline bool is_bounded() const override
    {
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
    eProsima_user_DllExport inline bool is_plain() const override
    {
        return false;
    }

    eProsima_user_DllExport inline bool is_plain(
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
    {
        static_cast<void>(data_representation);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        static_cast<void>(memory);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

};

/*!
 * @brief This class represents the TopicDataType of the type GeoLocationImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class GeoLocationImplPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef GeoLocationImpl type;

    eProsima_user_DllExport GeoLocationImplPubSubType();

    eProsima_user_DllExport ~GeoLocationImplPubSubType() override;

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
    {
        return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override
    {
        return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    eProsima_user_DllExport void* createData() override;

    eProsima_user_DllExport void deleteData(
            void* data) override;

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
    eProsima_user_DllExport inline bool is_bounded() const override
    {
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
    eProsima_user_DllExport inline bool is_plain() const override
    {
        return false;
    }

    eProsima_user_DllExport inline bool is_plain(
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
    {
        static_cast<void>(data_representation);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        static_cast<void>(memory);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

};

/*!
 * @brief This class represents the TopicDataType of the type UserInputImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class UserInputImplPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef UserInputImpl type;

    eProsima_user_DllExport UserInputImplPubSubType();

    eProsima_user_DllExport ~UserInputImplPubSubType() override;

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
    {
        return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override
    {
        return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    eProsima_user_DllExport void* createData() override;

    eProsima_user_DllExport void deleteData(
            void* data) override;

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
    eProsima_user_DllExport inline bool is_bounded() const override
    {
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
    eProsima_user_DllExport inline bool is_plain() const override
    {
        return false;
    }

    eProsima_user_DllExport inline bool is_plain(
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
    {
        static_cast<void>(data_representation);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        static_cast<void>(memory);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

};

/*!
 * @brief This class represents the TopicDataType of the type EncodedTaskImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class EncodedTaskImplPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef EncodedTaskImpl type;

    eProsima_user_DllExport EncodedTaskImplPubSubType();

    eProsima_user_DllExport ~EncodedTaskImplPubSubType() override;

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
    {
        return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override
    {
        return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    eProsima_user_DllExport void* createData() override;

    eProsima_user_DllExport void deleteData(
            void* data) override;

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
    eProsima_user_DllExport inline bool is_bounded() const override
    {
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
    eProsima_user_DllExport inline bool is_plain() const override
    {
        return false;
    }

    eProsima_user_DllExport inline bool is_plain(
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
    {
        static_cast<void>(data_representation);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        static_cast<void>(memory);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

};

/*!
 * @brief This class represents the TopicDataType of the type MLModelImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class MLModelImplPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef MLModelImpl type;

    eProsima_user_DllExport MLModelImplPubSubType();

    eProsima_user_DllExport ~MLModelImplPubSubType() override;

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
    {
        return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override
    {
        return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    eProsima_user_DllExport void* createData() override;

    eProsima_user_DllExport void deleteData(
            void* data) override;

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
    eProsima_user_DllExport inline bool is_bounded() const override
    {
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
    eProsima_user_DllExport inline bool is_plain() const override
    {
        return false;
    }

    eProsima_user_DllExport inline bool is_plain(
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
    {
        static_cast<void>(data_representation);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        static_cast<void>(memory);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

};

/*!
 * @brief This class represents the TopicDataType of the type HWResourceImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class HWResourceImplPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef HWResourceImpl type;

    eProsima_user_DllExport HWResourceImplPubSubType();

    eProsima_user_DllExport ~HWResourceImplPubSubType() override;

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
    {
        return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override
    {
        return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    eProsima_user_DllExport void* createData() override;

    eProsima_user_DllExport void deleteData(
            void* data) override;

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
    eProsima_user_DllExport inline bool is_bounded() const override
    {
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
    eProsima_user_DllExport inline bool is_plain() const override
    {
        return false;
    }

    eProsima_user_DllExport inline bool is_plain(
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
    {
        static_cast<void>(data_representation);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        static_cast<void>(memory);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

};

/*!
 * @brief This class represents the TopicDataType of the type CO2FootprintImpl defined by the user in the IDL file.
 * @ingroup typesImpl
 */
class CO2FootprintImplPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef CO2FootprintImpl type;

    eProsima_user_DllExport CO2FootprintImplPubSubType();

    eProsima_user_DllExport ~CO2FootprintImplPubSubType() override;

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
    {
        return serialize(data, payload, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override
    {
        return getSerializedSizeProvider(data, eprosima::fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    eProsima_user_DllExport std::function<uint32_t()> getSerializedSizeProvider(
            void* data,
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

    eProsima_user_DllExport bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    eProsima_user_DllExport void* createData() override;

    eProsima_user_DllExport void deleteData(
            void* data) override;

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
    eProsima_user_DllExport inline bool is_bounded() const override
    {
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
    eProsima_user_DllExport inline bool is_plain() const override
    {
        return false;
    }

    eProsima_user_DllExport inline bool is_plain(
            eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
    {
        static_cast<void>(data_representation);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        static_cast<void>(memory);
        return false;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

};

#endif // _FAST_DDS_GENERATED_TYPESIMPL_PUBSUBTYPES_H_

