// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_msgs:msg/MyMessage.idl
// generated code does not contain a copyright notice

#include "robot_msgs/msg/detail/my_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_msgs
const rosidl_type_hash_t *
robot_msgs__msg__MyMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0x8f, 0xb0, 0x86, 0x92, 0x7b, 0x32, 0x06,
      0x4c, 0xed, 0x61, 0x1b, 0x80, 0xfd, 0x0c, 0xe6,
      0xf3, 0x6f, 0x9c, 0xc5, 0x9b, 0xae, 0x6b, 0x3d,
      0xcc, 0x2f, 0x6d, 0x02, 0xf5, 0x50, 0x0a, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_msgs__msg__MyMessage__TYPE_NAME[] = "robot_msgs/msg/MyMessage";

// Define type names, field names, and default values
static char robot_msgs__msg__MyMessage__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field robot_msgs__msg__MyMessage__FIELDS[] = {
  {
    {robot_msgs__msg__MyMessage__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_msgs__msg__MyMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_msgs__msg__MyMessage__TYPE_NAME, 24, 24},
      {robot_msgs__msg__MyMessage__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}


static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_msgs__msg__MyMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_msgs__msg__MyMessage__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_msgs__msg__MyMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_msgs__msg__MyMessage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
