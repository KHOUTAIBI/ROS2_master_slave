// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from first_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "first_interfaces/msg/detail/custom_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace first_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CustomMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) first_interfaces::msg::CustomMessage(_init);
}

void CustomMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<first_interfaces::msg::CustomMessage *>(message_memory);
  typed_message->~CustomMessage();
}

size_t size_function__CustomMessage__range_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CustomMessage__range_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__CustomMessage__range_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__CustomMessage__range_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CustomMessage_message_member_array[3] = {
  {
    "range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces::msg::CustomMessage, range),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "range_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces::msg::CustomMessage, range_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__CustomMessage__range_list,  // size() function pointer
    get_const_function__CustomMessage__range_list,  // get_const(index) function pointer
    get_function__CustomMessage__range_list,  // get(index) function pointer
    resize_function__CustomMessage__range_list  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<first_interfaces::msg::String>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces::msg::CustomMessage, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CustomMessage_message_members = {
  "first_interfaces::msg",  // message namespace
  "CustomMessage",  // message name
  3,  // number of fields
  sizeof(first_interfaces::msg::CustomMessage),
  CustomMessage_message_member_array,  // message members
  CustomMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  CustomMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CustomMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CustomMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace first_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<first_interfaces::msg::CustomMessage>()
{
  return &::first_interfaces::msg::rosidl_typesupport_introspection_cpp::CustomMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, first_interfaces, msg, CustomMessage)() {
  return &::first_interfaces::msg::rosidl_typesupport_introspection_cpp::CustomMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
