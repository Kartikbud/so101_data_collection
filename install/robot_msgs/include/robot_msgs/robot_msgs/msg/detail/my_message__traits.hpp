// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_msgs/msg/my_message.hpp"


#ifndef ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__TRAITS_HPP_
#define ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_msgs/msg/detail/my_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyMessage & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_msgs::msg::MyMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_msgs::msg::MyMessage & msg)
{
  return robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msgs::msg::MyMessage>()
{
  return "robot_msgs::msg::MyMessage";
}

template<>
inline const char * name<robot_msgs::msg::MyMessage>()
{
  return "robot_msgs/msg/MyMessage";
}

template<>
struct has_fixed_size<robot_msgs::msg::MyMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_msgs::msg::MyMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_msgs::msg::MyMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__TRAITS_HPP_
