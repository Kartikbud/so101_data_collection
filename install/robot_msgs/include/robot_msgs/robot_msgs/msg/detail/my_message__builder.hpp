// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_msgs/msg/my_message.hpp"


#ifndef ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__BUILDER_HPP_
#define ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msgs/msg/detail/my_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msgs
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msgs::msg::MyMessage>()
{
  return ::robot_msgs::msg::MyMessage(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot_msgs

#endif  // ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__BUILDER_HPP_
