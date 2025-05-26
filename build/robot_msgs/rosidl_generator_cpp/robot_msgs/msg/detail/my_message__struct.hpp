// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_msgs/msg/my_message.hpp"


#ifndef ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_HPP_
#define ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msgs__msg__MyMessage __attribute__((deprecated))
#else
# define DEPRECATED__robot_msgs__msg__MyMessage __declspec(deprecated)
#endif

namespace robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyMessage_
{
  using Type = MyMessage_<ContainerAllocator>;

  explicit MyMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MyMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    robot_msgs::msg::MyMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msgs::msg::MyMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msgs::msg::MyMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msgs::msg::MyMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msgs::msg::MyMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msgs::msg::MyMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msgs::msg::MyMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msgs::msg::MyMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msgs::msg::MyMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msgs::msg::MyMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msgs__msg__MyMessage
    std::shared_ptr<robot_msgs::msg::MyMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msgs__msg__MyMessage
    std::shared_ptr<robot_msgs::msg::MyMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyMessage_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyMessage_

// alias to use template instance with default allocator
using MyMessage =
  robot_msgs::msg::MyMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_msgs

#endif  // ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_HPP_
