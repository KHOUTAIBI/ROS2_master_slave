// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from first_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "first_interfaces/msg/detail/custom__struct.hpp"
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

void Custom_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) first_interfaces::msg::Custom(_init);
}

void Custom_fini_function(void * message_memory)
{
  auto typed_message = static_cast<first_interfaces::msg::Custom *>(message_memory);
  typed_message->~Custom();
}

size_t size_function__Custom__range_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Custom__range_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Custom__range_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Custom__range_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Custom_message_member_array[3] = {
  {
    "range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces::msg::Custom, range),  // bytes offset in struct
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
    offsetof(first_interfaces::msg::Custom, range_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__Custom__range_list,  // size() function pointer
    get_const_function__Custom__range_list,  // get_const(index) function pointer
    get_function__Custom__range_list,  // get(index) function pointer
    resize_function__Custom__range_list  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_interfaces::msg::Custom, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Custom_message_members = {
  "first_interfaces::msg",  // message namespace
  "Custom",  // message name
  3,  // number of fields
  sizeof(first_interfaces::msg::Custom),
  Custom_message_member_array,  // message members
  Custom_init_function,  // function to initialize message memory (memory has to be allocated)
  Custom_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Custom_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Custom_message_members,
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
get_message_type_support_handle<first_interfaces::msg::Custom>()
{
  return &::first_interfaces::msg::rosidl_typesupport_introspection_cpp::Custom_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, first_interfaces, msg, Custom)() {
  return &::first_interfaces::msg::rosidl_typesupport_introspection_cpp::Custom_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
