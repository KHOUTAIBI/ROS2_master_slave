// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from first_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "first_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "first_interfaces/msg/detail/custom_message__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  first_interfaces::msg::CustomMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
get_serialized_size(
  const first_interfaces::msg::CustomMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
max_serialized_size_CustomMessage(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace first_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, first_interfaces, msg, CustomMessage)();

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
