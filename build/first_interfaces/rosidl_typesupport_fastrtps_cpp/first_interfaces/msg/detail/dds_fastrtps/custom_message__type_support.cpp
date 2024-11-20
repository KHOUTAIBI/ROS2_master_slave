// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from first_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice
#include "first_interfaces/msg/detail/custom_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "first_interfaces/msg/detail/custom_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace first_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const first_interfaces::msg::String &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  first_interfaces::msg::String &);
size_t get_serialized_size(
  const first_interfaces::msg::String &,
  size_t current_alignment);
size_t
max_serialized_size_String(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace first_interfaces


namespace first_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
cdr_serialize(
  const first_interfaces::msg::CustomMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: range
  cdr << ros_message.range;
  // Member: range_list
  {
    cdr << ros_message.range_list;
  }
  // Member: name
  first_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.name,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  first_interfaces::msg::CustomMessage & ros_message)
{
  // Member: range
  cdr >> ros_message.range;

  // Member: range_list
  {
    cdr >> ros_message.range_list;
  }

  // Member: name
  first_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.name);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
get_serialized_size(
  const first_interfaces::msg::CustomMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: range
  {
    size_t item_size = sizeof(ros_message.range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range_list
  {
    size_t array_size = ros_message.range_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.range_list[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: name

  current_alignment +=
    first_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.name, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
max_serialized_size_CustomMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: range_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: name
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        first_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_String(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CustomMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const first_interfaces::msg::CustomMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CustomMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<first_interfaces::msg::CustomMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CustomMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const first_interfaces::msg::CustomMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CustomMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CustomMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _CustomMessage__callbacks = {
  "first_interfaces::msg",
  "CustomMessage",
  _CustomMessage__cdr_serialize,
  _CustomMessage__cdr_deserialize,
  _CustomMessage__get_serialized_size,
  _CustomMessage__max_serialized_size
};

static rosidl_message_type_support_t _CustomMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CustomMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace first_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_first_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<first_interfaces::msg::CustomMessage>()
{
  return &first_interfaces::msg::typesupport_fastrtps_cpp::_CustomMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, first_interfaces, msg, CustomMessage)() {
  return &first_interfaces::msg::typesupport_fastrtps_cpp::_CustomMessage__handle;
}

#ifdef __cplusplus
}
#endif
