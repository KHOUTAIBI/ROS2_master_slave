// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm_interfaces:srv/MotorService.idl
// generated code does not contain a copyright notice

#ifndef STM_INTERFACES__SRV__DETAIL__MOTOR_SERVICE__STRUCT_HPP_
#define STM_INTERFACES__SRV__DETAIL__MOTOR_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__stm_interfaces__srv__MotorService_Request __attribute__((deprecated))
#else
# define DEPRECATED__stm_interfaces__srv__MotorService_Request __declspec(deprecated)
#endif

namespace stm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorService_Request_
{
  using Type = MotorService_Request_<ContainerAllocator>;

  explicit MotorService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0l;
      this->kp = 0.0;
      this->kd = 0.0;
    }
  }

  explicit MotorService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_type = 0l;
      this->kp = 0.0;
      this->kd = 0.0;
    }
  }

  // field types and members
  using _control_type_type =
    int32_t;
  _control_type_type control_type;
  using _kp_type =
    double;
  _kp_type kp;
  using _kd_type =
    double;
  _kd_type kd;

  // setters for named parameter idiom
  Type & set__control_type(
    const int32_t & _arg)
  {
    this->control_type = _arg;
    return *this;
  }
  Type & set__kp(
    const double & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const double & _arg)
  {
    this->kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm_interfaces::srv::MotorService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm_interfaces::srv::MotorService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm_interfaces::srv::MotorService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm_interfaces::srv::MotorService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm_interfaces::srv::MotorService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm_interfaces::srv::MotorService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm_interfaces::srv::MotorService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm_interfaces::srv::MotorService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm_interfaces::srv::MotorService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm_interfaces::srv::MotorService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm_interfaces__srv__MotorService_Request
    std::shared_ptr<stm_interfaces::srv::MotorService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm_interfaces__srv__MotorService_Request
    std::shared_ptr<stm_interfaces::srv::MotorService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorService_Request_ & other) const
  {
    if (this->control_type != other.control_type) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorService_Request_

// alias to use template instance with default allocator
using MotorService_Request =
  stm_interfaces::srv::MotorService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stm_interfaces


#ifndef _WIN32
# define DEPRECATED__stm_interfaces__srv__MotorService_Response __attribute__((deprecated))
#else
# define DEPRECATED__stm_interfaces__srv__MotorService_Response __declspec(deprecated)
#endif

namespace stm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorService_Response_
{
  using Type = MotorService_Response_<ContainerAllocator>;

  explicit MotorService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit MotorService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm_interfaces::srv::MotorService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm_interfaces::srv::MotorService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm_interfaces::srv::MotorService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm_interfaces::srv::MotorService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm_interfaces::srv::MotorService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm_interfaces::srv::MotorService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm_interfaces::srv::MotorService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm_interfaces::srv::MotorService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm_interfaces::srv::MotorService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm_interfaces::srv::MotorService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm_interfaces__srv__MotorService_Response
    std::shared_ptr<stm_interfaces::srv::MotorService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm_interfaces__srv__MotorService_Response
    std::shared_ptr<stm_interfaces::srv::MotorService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorService_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorService_Response_

// alias to use template instance with default allocator
using MotorService_Response =
  stm_interfaces::srv::MotorService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stm_interfaces

namespace stm_interfaces
{

namespace srv
{

struct MotorService
{
  using Request = stm_interfaces::srv::MotorService_Request;
  using Response = stm_interfaces::srv::MotorService_Response;
};

}  // namespace srv

}  // namespace stm_interfaces

#endif  // STM_INTERFACES__SRV__DETAIL__MOTOR_SERVICE__STRUCT_HPP_
