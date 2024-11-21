# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm_interfaces:msg/STMState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_STMState(type):
    """Metaclass of message 'STMState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('stm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'stm_interfaces.msg.STMState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stm_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stm_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stm_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stm_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stm_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class STMState(metaclass=Metaclass_STMState):
    """Message class 'STMState'."""

    __slots__ = [
        '_header',
        '_motor_encoder',
        '_motor_velocity',
        '_accel_x',
        '_accel_y',
        '_accel_z',
        '_gyro_x',
        '_gyro_y',
        '_gyro_z',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'motor_encoder': 'float',
        'motor_velocity': 'float',
        'accel_x': 'float',
        'accel_y': 'float',
        'accel_z': 'float',
        'gyro_x': 'float',
        'gyro_y': 'float',
        'gyro_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.motor_encoder = kwargs.get('motor_encoder', float())
        self.motor_velocity = kwargs.get('motor_velocity', float())
        self.accel_x = kwargs.get('accel_x', float())
        self.accel_y = kwargs.get('accel_y', float())
        self.accel_z = kwargs.get('accel_z', float())
        self.gyro_x = kwargs.get('gyro_x', float())
        self.gyro_y = kwargs.get('gyro_y', float())
        self.gyro_z = kwargs.get('gyro_z', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.motor_encoder != other.motor_encoder:
            return False
        if self.motor_velocity != other.motor_velocity:
            return False
        if self.accel_x != other.accel_x:
            return False
        if self.accel_y != other.accel_y:
            return False
        if self.accel_z != other.accel_z:
            return False
        if self.gyro_x != other.gyro_x:
            return False
        if self.gyro_y != other.gyro_y:
            return False
        if self.gyro_z != other.gyro_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def motor_encoder(self):
        """Message field 'motor_encoder'."""
        return self._motor_encoder

    @motor_encoder.setter
    def motor_encoder(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_encoder' field must be of type 'float'"
        self._motor_encoder = value

    @property
    def motor_velocity(self):
        """Message field 'motor_velocity'."""
        return self._motor_velocity

    @motor_velocity.setter
    def motor_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_velocity' field must be of type 'float'"
        self._motor_velocity = value

    @property
    def accel_x(self):
        """Message field 'accel_x'."""
        return self._accel_x

    @accel_x.setter
    def accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_x' field must be of type 'float'"
        self._accel_x = value

    @property
    def accel_y(self):
        """Message field 'accel_y'."""
        return self._accel_y

    @accel_y.setter
    def accel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_y' field must be of type 'float'"
        self._accel_y = value

    @property
    def accel_z(self):
        """Message field 'accel_z'."""
        return self._accel_z

    @accel_z.setter
    def accel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_z' field must be of type 'float'"
        self._accel_z = value

    @property
    def gyro_x(self):
        """Message field 'gyro_x'."""
        return self._gyro_x

    @gyro_x.setter
    def gyro_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_x' field must be of type 'float'"
        self._gyro_x = value

    @property
    def gyro_y(self):
        """Message field 'gyro_y'."""
        return self._gyro_y

    @gyro_y.setter
    def gyro_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_y' field must be of type 'float'"
        self._gyro_y = value

    @property
    def gyro_z(self):
        """Message field 'gyro_z'."""
        return self._gyro_z

    @gyro_z.setter
    def gyro_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_z' field must be of type 'float'"
        self._gyro_z = value
