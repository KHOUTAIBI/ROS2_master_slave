// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from stm_interfaces:srv/STMSetControlType.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "stm_interfaces/srv/detail/stm_set_control_type__struct.h"
#include "stm_interfaces/srv/detail/stm_set_control_type__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool stm_interfaces__srv__stm_set_control_type__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("stm_interfaces.srv._stm_set_control_type.STMSetControlType_Request", full_classname_dest, 66) == 0);
  }
  stm_interfaces__srv__STMSetControlType_Request * ros_message = _ros_message;
  {  // control_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kv
    PyObject * field = PyObject_GetAttrString(_pymsg, "kv");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kv = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stm_interfaces__srv__stm_set_control_type__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of STMSetControlType_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stm_interfaces.srv._stm_set_control_type");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "STMSetControlType_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stm_interfaces__srv__STMSetControlType_Request * ros_message = (stm_interfaces__srv__STMSetControlType_Request *)raw_ros_message;
  {  // control_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->control_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kv
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "stm_interfaces/srv/detail/stm_set_control_type__struct.h"
// already included above
// #include "stm_interfaces/srv/detail/stm_set_control_type__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool stm_interfaces__srv__stm_set_control_type__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("stm_interfaces.srv._stm_set_control_type.STMSetControlType_Response", full_classname_dest, 67) == 0);
  }
  stm_interfaces__srv__STMSetControlType_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * stm_interfaces__srv__stm_set_control_type__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of STMSetControlType_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("stm_interfaces.srv._stm_set_control_type");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "STMSetControlType_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  stm_interfaces__srv__STMSetControlType_Response * ros_message = (stm_interfaces__srv__STMSetControlType_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
