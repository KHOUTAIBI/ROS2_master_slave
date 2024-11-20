// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm_interfaces:srv/MotorService.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__SRV__DETAIL__MOTOR_SERVICE__TRAITS_HPP_
#define STM_INTERFACES__SRV__DETAIL__MOTOR_SERVICE__TRAITS_HPP_

#include "stm_interfaces/srv/detail/motor_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stm_interfaces::srv::MotorService_Request>()
{
  return "stm_interfaces::srv::MotorService_Request";
}

template<>
inline const char * name<stm_interfaces::srv::MotorService_Request>()
{
  return "stm_interfaces/srv/MotorService_Request";
}

template<>
struct has_fixed_size<stm_interfaces::srv::MotorService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm_interfaces::srv::MotorService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm_interfaces::srv::MotorService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stm_interfaces::srv::MotorService_Response>()
{
  return "stm_interfaces::srv::MotorService_Response";
}

template<>
inline const char * name<stm_interfaces::srv::MotorService_Response>()
{
  return "stm_interfaces/srv/MotorService_Response";
}

template<>
struct has_fixed_size<stm_interfaces::srv::MotorService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm_interfaces::srv::MotorService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm_interfaces::srv::MotorService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stm_interfaces::srv::MotorService>()
{
  return "stm_interfaces::srv::MotorService";
}

template<>
inline const char * name<stm_interfaces::srv::MotorService>()
{
  return "stm_interfaces/srv/MotorService";
}

template<>
struct has_fixed_size<stm_interfaces::srv::MotorService>
  : std::integral_constant<
    bool,
    has_fixed_size<stm_interfaces::srv::MotorService_Request>::value &&
    has_fixed_size<stm_interfaces::srv::MotorService_Response>::value
  >
{
};

template<>
struct has_bounded_size<stm_interfaces::srv::MotorService>
  : std::integral_constant<
    bool,
    has_bounded_size<stm_interfaces::srv::MotorService_Request>::value &&
    has_bounded_size<stm_interfaces::srv::MotorService_Response>::value
  >
{
};

template<>
struct is_service<stm_interfaces::srv::MotorService>
  : std::true_type
{
};

template<>
struct is_service_request<stm_interfaces::srv::MotorService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<stm_interfaces::srv::MotorService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STM_INTERFACES__SRV__DETAIL__MOTOR_SERVICE__TRAITS_HPP_
