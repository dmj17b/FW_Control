# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fw_msgs:msg/StateEstEuler.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateEstEuler(type):
    """Metaclass of message 'StateEstEuler'."""

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
                'fw_msgs.msg.StateEstEuler')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_est_euler
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_est_euler
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_est_euler
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_est_euler
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_est_euler

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StateEstEuler(metaclass=Metaclass_StateEstEuler):
    """Message class 'StateEstEuler'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_r',
        '_p',
        '_ya',
        '_dx',
        '_dy',
        '_dz',
        '_dr',
        '_dp',
        '_dya',
    ]

    _fields_and_field_types = {
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'r': 'float',
        'p': 'float',
        'ya': 'float',
        'dx': 'float',
        'dy': 'float',
        'dz': 'float',
        'dr': 'float',
        'dp': 'float',
        'dya': 'float',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.r = kwargs.get('r', float())
        self.p = kwargs.get('p', float())
        self.ya = kwargs.get('ya', float())
        self.dx = kwargs.get('dx', float())
        self.dy = kwargs.get('dy', float())
        self.dz = kwargs.get('dz', float())
        self.dr = kwargs.get('dr', float())
        self.dp = kwargs.get('dp', float())
        self.dya = kwargs.get('dya', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.r != other.r:
            return False
        if self.p != other.p:
            return False
        if self.ya != other.ya:
            return False
        if self.dx != other.dx:
            return False
        if self.dy != other.dy:
            return False
        if self.dz != other.dz:
            return False
        if self.dr != other.dr:
            return False
        if self.dp != other.dp:
            return False
        if self.dya != other.dya:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
        self._z = value

    @property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r' field must be of type 'float'"
        self._r = value

    @property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p' field must be of type 'float'"
        self._p = value

    @property
    def ya(self):
        """Message field 'ya'."""
        return self._ya

    @ya.setter
    def ya(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ya' field must be of type 'float'"
        self._ya = value

    @property
    def dx(self):
        """Message field 'dx'."""
        return self._dx

    @dx.setter
    def dx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dx' field must be of type 'float'"
        self._dx = value

    @property
    def dy(self):
        """Message field 'dy'."""
        return self._dy

    @dy.setter
    def dy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dy' field must be of type 'float'"
        self._dy = value

    @property
    def dz(self):
        """Message field 'dz'."""
        return self._dz

    @dz.setter
    def dz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dz' field must be of type 'float'"
        self._dz = value

    @property
    def dr(self):
        """Message field 'dr'."""
        return self._dr

    @dr.setter
    def dr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dr' field must be of type 'float'"
        self._dr = value

    @property
    def dp(self):
        """Message field 'dp'."""
        return self._dp

    @dp.setter
    def dp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dp' field must be of type 'float'"
        self._dp = value

    @property
    def dya(self):
        """Message field 'dya'."""
        return self._dya

    @dya.setter
    def dya(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dya' field must be of type 'float'"
        self._dya = value
