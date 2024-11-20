// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm_interfaces:srv/STMSetControlType.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__SRV__DETAIL__STM_SET_CONTROL_TYPE__BUILDER_HPP_
#define STM_INTERFACES__SRV__DETAIL__STM_SET_CONTROL_TYPE__BUILDER_HPP_

#include "stm_interfaces/srv/detail/stm_set_control_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace stm_interfaces
{

namespace srv
{

namespace builder
{

class Init_STMSetControlType_Request_kd
{
public:
  explicit Init_STMSetControlType_Request_kd(::stm_interfaces::srv::STMSetControlType_Request & msg)
  : msg_(msg)
  {}
  ::stm_interfaces::srv::STMSetControlType_Request kd(::stm_interfaces::srv::STMSetControlType_Request::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm_interfaces::srv::STMSetControlType_Request msg_;
};

class Init_STMSetControlType_Request_kp
{
public:
  explicit Init_STMSetControlType_Request_kp(::stm_interfaces::srv::STMSetControlType_Request & msg)
  : msg_(msg)
  {}
  Init_STMSetControlType_Request_kd kp(::stm_interfaces::srv::STMSetControlType_Request::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_STMSetControlType_Request_kd(msg_);
  }

private:
  ::stm_interfaces::srv::STMSetControlType_Request msg_;
};

class Init_STMSetControlType_Request_control_type
{
public:
  Init_STMSetControlType_Request_control_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_STMSetControlType_Request_kp control_type(::stm_interfaces::srv::STMSetControlType_Request::_control_type_type arg)
  {
    msg_.control_type = std::move(arg);
    return Init_STMSetControlType_Request_kp(msg_);
  }

private:
  ::stm_interfaces::srv::STMSetControlType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm_interfaces::srv::STMSetControlType_Request>()
{
  return stm_interfaces::srv::builder::Init_STMSetControlType_Request_control_type();
}

}  // namespace stm_interfaces


namespace stm_interfaces
{

namespace srv
{

namespace builder
{

class Init_STMSetControlType_Response_success
{
public:
  Init_STMSetControlType_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::stm_interfaces::srv::STMSetControlType_Response success(::stm_interfaces::srv::STMSetControlType_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm_interfaces::srv::STMSetControlType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm_interfaces::srv::STMSetControlType_Response>()
{
  return stm_interfaces::srv::builder::Init_STMSetControlType_Response_success();
}

}  // namespace stm_interfaces

#endif  // STM_INTERFACES__SRV__DETAIL__STM_SET_CONTROL_TYPE__BUILDER_HPP_
