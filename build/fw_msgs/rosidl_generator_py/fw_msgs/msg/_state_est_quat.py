# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fw_msgs:msg/StateEstQuat.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateEstQuat(type):
    """Metaclass of message 'StateEstQuat'."""

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
            module = import_type_support('fw_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fw_msgs.msg.StateEstQuat')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_est_quat
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_est_quat
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_est_quat
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_est_quat
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_est_quat

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StateEstQuat(metaclass=Metaclass_StateEstQuat):
    """Message class 'StateEstQuat'."""

    __slots__ = [
        '_x_trans',
        '_y_trans',
        '_z_trans',
        '_x_rot',
        '_y_rot',
        '_z_rot',
        '_w',
        '_dx_trans',
        '_dy_trans',
        '_dz_trans',
        '_dx_rot',
        '_dy_rot',
        '_dz_rot',
        '_dw',
    ]

    _fields_and_field_types = {
        'x_trans': 'float',
        'y_trans': 'float',
        'z_trans': 'float',
        'x_rot': 'float',
        'y_rot': 'float',
        'z_rot': 'float',
        'w': 'float',
        'dx_trans': 'float',
        'dy_trans': 'float',
        'dz_trans': 'float',
        'dx_rot': 'float',
        'dy_rot': 'float',
        'dz_rot': 'float',
        'dw': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.x_trans = kwargs.get('x_trans', float())
        self.y_trans = kwargs.get('y_trans', float())
        self.z_trans = kwargs.get('z_trans', float())
        self.x_rot = kwargs.get('x_rot', float())
        self.y_rot = kwargs.get('y_rot', float())
        self.z_rot = kwargs.get('z_rot', float())
        self.w = kwargs.get('w', float())
        self.dx_trans = kwargs.get('dx_trans', float())
        self.dy_trans = kwargs.get('dy_trans', float())
        self.dz_trans = kwargs.get('dz_trans', float())
        self.dx_rot = kwargs.get('dx_rot', float())
        self.dy_rot = kwargs.get('dy_rot', float())
        self.dz_rot = kwargs.get('dz_rot', float())
        self.dw = kwargs.get('dw', float())

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
        if self.x_trans != other.x_trans:
            return False
        if self.y_trans != other.y_trans:
            return False
        if self.z_trans != other.z_trans:
            return False
        if self.x_rot != other.x_rot:
            return False
        if self.y_rot != other.y_rot:
            return False
        if self.z_rot != other.z_rot:
            return False
        if self.w != other.w:
            return False
        if self.dx_trans != other.dx_trans:
            return False
        if self.dy_trans != other.dy_trans:
            return False
        if self.dz_trans != other.dz_trans:
            return False
        if self.dx_rot != other.dx_rot:
            return False
        if self.dy_rot != other.dy_rot:
            return False
        if self.dz_rot != other.dz_rot:
            return False
        if self.dw != other.dw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x_trans(self):
        """Message field 'x_trans'."""
        return self._x_trans

    @x_trans.setter
    def x_trans(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_trans' field must be of type 'float'"
        self._x_trans = value

    @property
    def y_trans(self):
        """Message field 'y_trans'."""
        return self._y_trans

    @y_trans.setter
    def y_trans(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_trans' field must be of type 'float'"
        self._y_trans = value

    @property
    def z_trans(self):
        """Message field 'z_trans'."""
        return self._z_trans

    @z_trans.setter
    def z_trans(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_trans' field must be of type 'float'"
        self._z_trans = value

    @property
    def x_rot(self):
        """Message field 'x_rot'."""
        return self._x_rot

    @x_rot.setter
    def x_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_rot' field must be of type 'float'"
        self._x_rot = value

    @property
    def y_rot(self):
        """Message field 'y_rot'."""
        return self._y_rot

    @y_rot.setter
    def y_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_rot' field must be of type 'float'"
        self._y_rot = value

    @property
    def z_rot(self):
        """Message field 'z_rot'."""
        return self._z_rot

    @z_rot.setter
    def z_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_rot' field must be of type 'float'"
        self._z_rot = value

    @property
    def w(self):
        """Message field 'w'."""
        return self._w

    @w.setter
    def w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w' field must be of type 'float'"
        self._w = value

    @property
    def dx_trans(self):
        """Message field 'dx_trans'."""
        return self._dx_trans

    @dx_trans.setter
    def dx_trans(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dx_trans' field must be of type 'float'"
        self._dx_trans = value

    @property
    def dy_trans(self):
        """Message field 'dy_trans'."""
        return self._dy_trans

    @dy_trans.setter
    def dy_trans(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dy_trans' field must be of type 'float'"
        self._dy_trans = value

    @property
    def dz_trans(self):
        """Message field 'dz_trans'."""
        return self._dz_trans

    @dz_trans.setter
    def dz_trans(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dz_trans' field must be of type 'float'"
        self._dz_trans = value

    @property
    def dx_rot(self):
        """Message field 'dx_rot'."""
        return self._dx_rot

    @dx_rot.setter
    def dx_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dx_rot' field must be of type 'float'"
        self._dx_rot = value

    @property
    def dy_rot(self):
        """Message field 'dy_rot'."""
        return self._dy_rot

    @dy_rot.setter
    def dy_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dy_rot' field must be of type 'float'"
        self._dy_rot = value

    @property
    def dz_rot(self):
        """Message field 'dz_rot'."""
        return self._dz_rot

    @dz_rot.setter
    def dz_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dz_rot' field must be of type 'float'"
        self._dz_rot = value

    @property
    def dw(self):
        """Message field 'dw'."""
        return self._dw

    @dw.setter
    def dw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dw' field must be of type 'float'"
        self._dw = value
