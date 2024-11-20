// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_interfaces:msg/Custom.idl
// generated code does not contain a copyright notice

#ifndef FIRST_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__first_interfaces__msg__Custom __attribute__((deprecated))
#else
# define DEPRECATED__first_interfaces__msg__Custom __declspec(deprecated)
#endif

namespace first_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Custom_
{
  using Type = Custom_<ContainerAllocator>;

  explicit Custom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->name = "";
    }
  }

  explicit Custom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
      this->name = "";
    }
  }

  // field types and members
  using _range_type =
    float;
  _range_type range;
  using _range_list_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _range_list_type range_list;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__range_list(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->range_list = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_interfaces::msg::Custom_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_interfaces::msg::Custom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_interfaces::msg::Custom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_interfaces::msg::Custom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_interfaces::msg::Custom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_interfaces::msg::Custom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_interfaces::msg::Custom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_interfaces::msg::Custom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_interfaces::msg::Custom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_interfaces::msg::Custom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_interfaces__msg__Custom
    std::shared_ptr<first_interfaces::msg::Custom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_interfaces__msg__Custom
    std::shared_ptr<first_interfaces::msg::Custom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Custom_ & other) const
  {
    if (this->range != other.range) {
      return false;
    }
    if (this->range_list != other.range_list) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Custom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Custom_

// alias to use template instance with default allocator
using Custom =
  first_interfaces::msg::Custom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__CUSTOM__STRUCT_HPP_
