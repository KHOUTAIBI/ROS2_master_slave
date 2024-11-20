// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm_interfaces:msg/STMControl.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__MSG__DETAIL__STM_CONTROL__STRUCT_HPP_
#define STM_INTERFACES__MSG__DETAIL__STM_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stm_interfaces__msg__STMControl __attribute__((deprecated))
#else
# define DEPRECATED__stm_interfaces__msg__STMControl __declspec(deprecated)
#endif

namespace stm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct STMControl_
{
  using Type = STMControl_<ContainerAllocator>;

  explicit STMControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0l;
      this->setpoint = 0.0f;
      this->kp = 0.0f;
      this->pwm = 0.0f;
    }
  }

  explicit STMControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0l;
      this->setpoint = 0.0f;
      this->kp = 0.0f;
      this->pwm = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _control_type_type =
    int32_t;
  _control_type_type control_type;
  using _setpoint_type =
    float;
  _setpoint_type setpoint;
  using _kp_type =
    float;
  _kp_type kp;
  using _pwm_type =
    float;
  _pwm_type pwm;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__control_type(
    const int32_t & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__setpoint(
    const float & _arg)
  {
    this->setpoint = _arg;
    return *this;
  }
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__pwm(
    const float & _arg)
  {
    this->pwm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm_interfaces::msg::STMControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm_interfaces::msg::STMControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm_interfaces::msg::STMControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm_interfaces::msg::STMControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm_interfaces::msg::STMControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm_interfaces::msg::STMControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm_interfaces::msg::STMControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm_interfaces::msg::STMControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm_interfaces::msg::STMControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm_interfaces::msg::STMControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm_interfaces__msg__STMControl
    std::shared_ptr<stm_interfaces::msg::STMControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm_interfaces__msg__STMControl
    std::shared_ptr<stm_interfaces::msg::STMControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const STMControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->setpoint != other.setpoint) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->pwm != other.pwm) {
      return false;
    }
    return true;
  }
  bool operator!=(const STMControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct STMControl_

// alias to use template instance with default allocator
using STMControl =
  stm_interfaces::msg::STMControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stm_interfaces

#endif  // STM_INTERFACES__MSG__DETAIL__STM_CONTROL__STRUCT_HPP_
