// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from digital_space:srv/Querydata.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "digital_space/srv/detail/querydata__rosidl_typesupport_introspection_c.h"
#include "digital_space/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "digital_space/srv/detail/querydata__functions.h"
#include "digital_space/srv/detail/querydata__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  digital_space__srv__Querydata_Request__init(message_memory);
}

void Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_fini_function(void * message_memory)
{
  digital_space__srv__Querydata_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(digital_space__srv__Querydata_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_message_members = {
  "digital_space__srv",  // message namespace
  "Querydata_Request",  // message name
  1,  // number of fields
  sizeof(digital_space__srv__Querydata_Request),
  Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_message_member_array,  // message members
  Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_message_type_support_handle = {
  0,
  &Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_digital_space
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, digital_space, srv, Querydata_Request)() {
  if (!Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_message_type_support_handle.typesupport_identifier) {
    Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Querydata_Request__rosidl_typesupport_introspection_c__Querydata_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "digital_space/srv/detail/querydata__rosidl_typesupport_introspection_c.h"
// already included above
// #include "digital_space/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "digital_space/srv/detail/querydata__functions.h"
// already included above
// #include "digital_space/srv/detail/querydata__struct.h"


// Include directives for member types
// Member `latest_data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  digital_space__srv__Querydata_Response__init(message_memory);
}

void Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_fini_function(void * message_memory)
{
  digital_space__srv__Querydata_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_message_member_array[1] = {
  {
    "latest_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(digital_space__srv__Querydata_Response, latest_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_message_members = {
  "digital_space__srv",  // message namespace
  "Querydata_Response",  // message name
  1,  // number of fields
  sizeof(digital_space__srv__Querydata_Response),
  Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_message_member_array,  // message members
  Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_message_type_support_handle = {
  0,
  &Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_digital_space
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, digital_space, srv, Querydata_Response)() {
  if (!Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_message_type_support_handle.typesupport_identifier) {
    Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Querydata_Response__rosidl_typesupport_introspection_c__Querydata_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "digital_space/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "digital_space/srv/detail/querydata__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers digital_space__srv__detail__querydata__rosidl_typesupport_introspection_c__Querydata_service_members = {
  "digital_space__srv",  // service namespace
  "Querydata",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // digital_space__srv__detail__querydata__rosidl_typesupport_introspection_c__Querydata_Request_message_type_support_handle,
  NULL  // response message
  // digital_space__srv__detail__querydata__rosidl_typesupport_introspection_c__Querydata_Response_message_type_support_handle
};

static rosidl_service_type_support_t digital_space__srv__detail__querydata__rosidl_typesupport_introspection_c__Querydata_service_type_support_handle = {
  0,
  &digital_space__srv__detail__querydata__rosidl_typesupport_introspection_c__Querydata_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, digital_space, srv, Querydata_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, digital_space, srv, Querydata_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_digital_space
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, digital_space, srv, Querydata)() {
  if (!digital_space__srv__detail__querydata__rosidl_typesupport_introspection_c__Querydata_service_type_support_handle.typesupport_identifier) {
    digital_space__srv__detail__querydata__rosidl_typesupport_introspection_c__Querydata_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)digital_space__srv__detail__querydata__rosidl_typesupport_introspection_c__Querydata_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, digital_space, srv, Querydata_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, digital_space, srv, Querydata_Response)()->data;
  }

  return &digital_space__srv__detail__querydata__rosidl_typesupport_introspection_c__Querydata_service_type_support_handle;
}
