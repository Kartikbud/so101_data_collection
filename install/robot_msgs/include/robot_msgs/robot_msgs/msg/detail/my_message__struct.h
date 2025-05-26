// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_msgs/msg/my_message.h"


#ifndef ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_H_
#define ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MyMessage in the package robot_msgs.
typedef struct robot_msgs__msg__MyMessage
{
  uint8_t structure_needs_at_least_one_member;
} robot_msgs__msg__MyMessage;

// Struct for a sequence of robot_msgs__msg__MyMessage.
typedef struct robot_msgs__msg__MyMessage__Sequence
{
  robot_msgs__msg__MyMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_msgs__msg__MyMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MSGS__MSG__DETAIL__MY_MESSAGE__STRUCT_H_
