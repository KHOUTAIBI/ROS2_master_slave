// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm_interfaces:msg/STMState.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__MSG__DETAIL__STM_STATE__STRUCT_HPP_
#define STM_INTERFACES__MSG__DETAIL__STM_STATE__STRUCT_HPP_

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
# define DEPRECATED__stm_interfaces__msg__STMState __attribute__((deprecated))
#else
# define DEPRECATED__stm_interfaces__msg__STMState __declspec(deprecated)
#endif

namespace stm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct STMState_
{
  using Type = STMState_<ContainerAllocator>;

  explicit STMState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_encoder = 0.0f;
      this->motor_velocity = 0.0f;
      this->accel_x = 0.0f;
      this->accel_y = 0.0f;
      this->accel_z = 0.0f;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
    }
  }

  explicit STMState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_encoder = 0.0f;
      this->motor_velocity = 0.0f;
      this->accel_x = 0.0f;
      this->accel_y = 0.0f;
      this->accel_z = 0.0f;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motor_encoder_type =
    float;
  _motor_encoder_type motor_encoder;
  using _motor_velocity_type =
    float;
  _motor_velocity_type motor_velocity;
  using _accel_x_type =
    float;
  _accel_x_type accel_x;
  using _accel_y_type =
    float;
  _accel_y_type accel_y;
  using _accel_z_type =
    float;
  _accel_z_type accel_z;
  using _gyro_x_type =
    float;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    float;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    float;
  _gyro_z_type gyro_z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motor_encoder(
    const float & _arg)
  {
    this->motor_encoder = _arg;
    return *this;
  }
  Type & set__motor_velocity(
    const float & _arg)
  {
    this->motor_velocity = _arg;
    return *this;
  }
  Type & set__accel_x(
    const float & _arg)
  {
    this->accel_x = _arg;
    return *this;
  }
  Type & set__accel_y(
    const float & _arg)
  {
    this->accel_y = _arg;
    return *this;
  }
  Type & set__accel_z(
    const float & _arg)
  {
    this->accel_z = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const float & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const float & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const float & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm_interfaces::msg::STMState_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm_interfaces::msg::STMState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm_interfaces::msg::STMState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm_interfaces::msg::STMState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm_interfaces::msg::STMState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm_interfaces::msg::STMState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm_interfaces::msg::STMState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm_interfaces::msg::STMState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm_interfaces::msg::STMState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm_interfaces::msg::STMState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm_interfaces__msg__STMState
    std::shared_ptr<stm_interfaces::msg::STMState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm_interfaces__msg__STMState
    std::shared_ptr<stm_interfaces::msg::STMState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const STMState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motor_encoder != other.motor_encoder) {
      return false;
    }
    if (this->motor_velocity != other.motor_velocity) {
      return false;
    }
    if (this->accel_x != other.accel_x) {
      return false;
    }
    if (this->accel_y != other.accel_y) {
      return false;
    }
    if (this->accel_z != other.accel_z) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const STMState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct STMState_

// alias to use template instance with default allocator
using STMState =
  stm_interfaces::msg::STMState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stm_interfaces

#endif  // STM_INTERFACES__MSG__DETAIL__STM_STATE__STRUCT_HPP_
