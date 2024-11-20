// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm_interfaces:msg/STMControl.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__MSG__DETAIL__STM_CONTROL__TRAITS_HPP_
#define STM_INTERFACES__MSG__DETAIL__STM_CONTROL__TRAITS_HPP_

#include "stm_interfaces/msg/detail/stm_control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stm_interfaces::msg::STMControl>()
{
  return "stm_interfaces::msg::STMControl";
}

template<>
inline const char * name<stm_interfaces::msg::STMControl>()
{
  return "stm_interfaces/msg/STMControl";
}

template<>
struct has_fixed_size<stm_interfaces::msg::STMControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<stm_interfaces::msg::STMControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<stm_interfaces::msg::STMControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM_INTERFACES__MSG__DETAIL__STM_CONTROL__TRAITS_HPP_
