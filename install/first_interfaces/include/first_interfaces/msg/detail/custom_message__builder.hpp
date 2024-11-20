// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_

#include "first_interfaces/msg/detail/custom_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace first_interfaces
{

namespace msg
{

namespace builder
{

class Init_CustomMessage_name
{
public:
  explicit Init_CustomMessage_name(::first_interfaces::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  ::first_interfaces::msg::CustomMessage name(::first_interfaces::msg::CustomMessage::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_interfaces::msg::CustomMessage msg_;
};

class Init_CustomMessage_range_list
{
public:
  explicit Init_CustomMessage_range_list(::first_interfaces::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  Init_CustomMessage_name range_list(::first_interfaces::msg::CustomMessage::_range_list_type arg)
  {
    msg_.range_list = std::move(arg);
    return Init_CustomMessage_name(msg_);
  }

private:
  ::first_interfaces::msg::CustomMessage msg_;
};

class Init_CustomMessage_range
{
public:
  Init_CustomMessage_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMessage_range_list range(::first_interfaces::msg::CustomMessage::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_CustomMessage_range_list(msg_);
  }

private:
  ::first_interfaces::msg::CustomMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_interfaces::msg::CustomMessage>()
{
  return first_interfaces::msg::builder::Init_CustomMessage_range();
}

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
