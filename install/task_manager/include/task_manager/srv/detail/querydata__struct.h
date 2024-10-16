// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_manager:srv/Querydata.idl
// generated code does not contain a copyright notice

#ifndef TASK_MANAGER__SRV__DETAIL__QUERYDATA__STRUCT_H_
#define TASK_MANAGER__SRV__DETAIL__QUERYDATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Querydata in the package task_manager.
typedef struct task_manager__srv__Querydata_Request
{
  uint8_t structure_needs_at_least_one_member;
} task_manager__srv__Querydata_Request;

// Struct for a sequence of task_manager__srv__Querydata_Request.
typedef struct task_manager__srv__Querydata_Request__Sequence
{
  task_manager__srv__Querydata_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager__srv__Querydata_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'latest_data'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Querydata in the package task_manager.
typedef struct task_manager__srv__Querydata_Response
{
  rosidl_runtime_c__String latest_data;
} task_manager__srv__Querydata_Response;

// Struct for a sequence of task_manager__srv__Querydata_Response.
typedef struct task_manager__srv__Querydata_Response__Sequence
{
  task_manager__srv__Querydata_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_manager__srv__Querydata_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MANAGER__SRV__DETAIL__QUERYDATA__STRUCT_H_
