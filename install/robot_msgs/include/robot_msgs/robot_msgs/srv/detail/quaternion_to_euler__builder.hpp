// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msgs:srv/QuaternionToEuler.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_msgs/srv/quaternion_to_euler.hpp"


#ifndef ROBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_
#define ROBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msgs/srv/detail/quaternion_to_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaternionToEuler_Request_w
{
public:
  explicit Init_QuaternionToEuler_Request_w(::robot_msgs::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  ::robot_msgs::srv::QuaternionToEuler_Request w(::robot_msgs::srv::QuaternionToEuler_Request::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_z
{
public:
  explicit Init_QuaternionToEuler_Request_z(::robot_msgs::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Request_w z(::robot_msgs::srv::QuaternionToEuler_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_QuaternionToEuler_Request_w(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_y
{
public:
  explicit Init_QuaternionToEuler_Request_y(::robot_msgs::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Request_z y(::robot_msgs::srv::QuaternionToEuler_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_QuaternionToEuler_Request_z(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_x
{
public:
  Init_QuaternionToEuler_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionToEuler_Request_y x(::robot_msgs::srv::QuaternionToEuler_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_QuaternionToEuler_Request_y(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msgs::srv::QuaternionToEuler_Request>()
{
  return robot_msgs::srv::builder::Init_QuaternionToEuler_Request_x();
}

}  // namespace robot_msgs


namespace robot_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaternionToEuler_Response_yaw
{
public:
  explicit Init_QuaternionToEuler_Response_yaw(::robot_msgs::srv::QuaternionToEuler_Response & msg)
  : msg_(msg)
  {}
  ::robot_msgs::srv::QuaternionToEuler_Response yaw(::robot_msgs::srv::QuaternionToEuler_Response::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Response msg_;
};

class Init_QuaternionToEuler_Response_pitch
{
public:
  explicit Init_QuaternionToEuler_Response_pitch(::robot_msgs::srv::QuaternionToEuler_Response & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Response_yaw pitch(::robot_msgs::srv::QuaternionToEuler_Response::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_QuaternionToEuler_Response_yaw(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Response msg_;
};

class Init_QuaternionToEuler_Response_roll
{
public:
  Init_QuaternionToEuler_Response_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionToEuler_Response_pitch roll(::robot_msgs::srv::QuaternionToEuler_Response::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_QuaternionToEuler_Response_pitch(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msgs::srv::QuaternionToEuler_Response>()
{
  return robot_msgs::srv::builder::Init_QuaternionToEuler_Response_roll();
}

}  // namespace robot_msgs


namespace robot_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaternionToEuler_Event_response
{
public:
  explicit Init_QuaternionToEuler_Event_response(::robot_msgs::srv::QuaternionToEuler_Event & msg)
  : msg_(msg)
  {}
  ::robot_msgs::srv::QuaternionToEuler_Event response(::robot_msgs::srv::QuaternionToEuler_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Event msg_;
};

class Init_QuaternionToEuler_Event_request
{
public:
  explicit Init_QuaternionToEuler_Event_request(::robot_msgs::srv::QuaternionToEuler_Event & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Event_response request(::robot_msgs::srv::QuaternionToEuler_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_QuaternionToEuler_Event_response(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Event msg_;
};

class Init_QuaternionToEuler_Event_info
{
public:
  Init_QuaternionToEuler_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionToEuler_Event_request info(::robot_msgs::srv::QuaternionToEuler_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_QuaternionToEuler_Event_request(msg_);
  }

private:
  ::robot_msgs::srv::QuaternionToEuler_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msgs::srv::QuaternionToEuler_Event>()
{
  return robot_msgs::srv::builder::Init_QuaternionToEuler_Event_info();
}

}  // namespace robot_msgs

#endif  // ROBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_
