// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
#define STM_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

#include "stm_interfaces/srv/detail/add_two_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace stm_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Request_b
{
public:
  explicit Init_AddTwoInts_Request_b(::stm_interfaces::srv::AddTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::stm_interfaces::srv::AddTwoInts_Request b(::stm_interfaces::srv::AddTwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm_interfaces::srv::AddTwoInts_Request msg_;
};

class Init_AddTwoInts_Request_a
{
public:
  Init_AddTwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Request_b a(::stm_interfaces::srv::AddTwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInts_Request_b(msg_);
  }

private:
  ::stm_interfaces::srv::AddTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm_interfaces::srv::AddTwoInts_Request>()
{
  return stm_interfaces::srv::builder::Init_AddTwoInts_Request_a();
}

}  // namespace stm_interfaces


namespace stm_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Response_sum
{
public:
  Init_AddTwoInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::stm_interfaces::srv::AddTwoInts_Response sum(::stm_interfaces::srv::AddTwoInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm_interfaces::srv::AddTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm_interfaces::srv::AddTwoInts_Response>()
{
  return stm_interfaces::srv::builder::Init_AddTwoInts_Response_sum();
}

}  // namespace stm_interfaces

#endif  // STM_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
