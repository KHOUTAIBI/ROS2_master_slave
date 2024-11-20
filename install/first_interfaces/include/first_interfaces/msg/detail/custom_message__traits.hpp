// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from first_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_

#include "first_interfaces/msg/detail/custom_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'name'
#include "first_interfaces/msg/detail/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<first_interfaces::msg::CustomMessage>()
{
  return "first_interfaces::msg::CustomMessage";
}

template<>
inline const char * name<first_interfaces::msg::CustomMessage>()
{
  return "first_interfaces/msg/CustomMessage";
}

template<>
struct has_fixed_size<first_interfaces::msg::CustomMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<first_interfaces::msg::CustomMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<first_interfaces::msg::CustomMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__TRAITS_HPP_
