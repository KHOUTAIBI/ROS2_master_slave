// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm_interfaces:msg/STMControl.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__MSG__DETAIL__STM_CONTROL__BUILDER_HPP_
#define STM_INTERFACES__MSG__DETAIL__STM_CONTROL__BUILDER_HPP_

#include "stm_interfaces/msg/detail/stm_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace stm_interfaces
{

namespace msg
{

namespace builder
{

class Init_STMControl_pwm
{
public:
  explicit Init_STMControl_pwm(::stm_interfaces::msg::STMControl & msg)
  : msg_(msg)
  {}
  ::stm_interfaces::msg::STMControl pwm(::stm_interfaces::msg::STMControl::_pwm_type arg)
  {
    msg_.pwm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm_interfaces::msg::STMControl msg_;
};

class Init_STMControl_kp
{
public:
  explicit Init_STMControl_kp(::stm_interfaces::msg::STMControl & msg)
  : msg_(msg)
  {}
  Init_STMControl_pwm kp(::stm_interfaces::msg::STMControl::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_STMControl_pwm(msg_);
  }

private:
  ::stm_interfaces::msg::STMControl msg_;
};

class Init_STMControl_setpoint
{
public:
  explicit Init_STMControl_setpoint(::stm_interfaces::msg::STMControl & msg)
  : msg_(msg)
  {}
  Init_STMControl_kp setpoint(::stm_interfaces::msg::STMControl::_setpoint_type arg)
  {
    msg_.setpoint = std::move(arg);
    return Init_STMControl_kp(msg_);
  }

private:
  ::stm_interfaces::msg::STMControl msg_;
};

class Init_STMControl_control_type
{
public:
  explicit Init_STMControl_control_type(::stm_interfaces::msg::STMControl & msg)
  : msg_(msg)
  {}
  Init_STMControl_setpoint control_type(::stm_interfaces::msg::STMControl::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_STMControl_setpoint(msg_);
  }

private:
  ::stm_interfaces::msg::STMControl msg_;
};

class Init_STMControl_header
{
public:
  Init_STMControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_STMControl_control_type header(::stm_interfaces::msg::STMControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_STMControl_control_type(msg_);
  }

private:
  ::stm_interfaces::msg::STMControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm_interfaces::msg::STMControl>()
{
  return stm_interfaces::msg::builder::Init_STMControl_header();
}

}  // namespace stm_interfaces

#endif  // STM_INTERFACES__MSG__DETAIL__STM_CONTROL__BUILDER_HPP_
