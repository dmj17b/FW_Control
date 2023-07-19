// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fw_msgs:msg/StateEstQuat.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__STRUCT_HPP_
#define FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fw_msgs__msg__StateEstQuat __attribute__((deprecated))
#else
# define DEPRECATED__fw_msgs__msg__StateEstQuat __declspec(deprecated)
#endif

namespace fw_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateEstQuat_
{
  using Type = StateEstQuat_<ContainerAllocator>;

  explicit StateEstQuat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_trans = 0.0f;
      this->y_trans = 0.0f;
      this->z_trans = 0.0f;
      this->x_rot = 0.0f;
      this->y_rot = 0.0f;
      this->z_rot = 0.0f;
      this->w = 0.0f;
      this->dx_trans = 0.0f;
      this->dy_trans = 0.0f;
      this->dz_trans = 0.0f;
      this->dx_rot = 0.0f;
      this->dy_rot = 0.0f;
      this->dz_rot = 0.0f;
      this->dw = 0.0f;
    }
  }

  explicit StateEstQuat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_trans = 0.0f;
      this->y_trans = 0.0f;
      this->z_trans = 0.0f;
      this->x_rot = 0.0f;
      this->y_rot = 0.0f;
      this->z_rot = 0.0f;
      this->w = 0.0f;
      this->dx_trans = 0.0f;
      this->dy_trans = 0.0f;
      this->dz_trans = 0.0f;
      this->dx_rot = 0.0f;
      this->dy_rot = 0.0f;
      this->dz_rot = 0.0f;
      this->dw = 0.0f;
    }
  }

  // field types and members
  using _x_trans_type =
    float;
  _x_trans_type x_trans;
  using _y_trans_type =
    float;
  _y_trans_type y_trans;
  using _z_trans_type =
    float;
  _z_trans_type z_trans;
  using _x_rot_type =
    float;
  _x_rot_type x_rot;
  using _y_rot_type =
    float;
  _y_rot_type y_rot;
  using _z_rot_type =
    float;
  _z_rot_type z_rot;
  using _w_type =
    float;
  _w_type w;
  using _dx_trans_type =
    float;
  _dx_trans_type dx_trans;
  using _dy_trans_type =
    float;
  _dy_trans_type dy_trans;
  using _dz_trans_type =
    float;
  _dz_trans_type dz_trans;
  using _dx_rot_type =
    float;
  _dx_rot_type dx_rot;
  using _dy_rot_type =
    float;
  _dy_rot_type dy_rot;
  using _dz_rot_type =
    float;
  _dz_rot_type dz_rot;
  using _dw_type =
    float;
  _dw_type dw;

  // setters for named parameter idiom
  Type & set__x_trans(
    const float & _arg)
  {
    this->x_trans = _arg;
    return *this;
  }
  Type & set__y_trans(
    const float & _arg)
  {
    this->y_trans = _arg;
    return *this;
  }
  Type & set__z_trans(
    const float & _arg)
  {
    this->z_trans = _arg;
    return *this;
  }
  Type & set__x_rot(
    const float & _arg)
  {
    this->x_rot = _arg;
    return *this;
  }
  Type & set__y_rot(
    const float & _arg)
  {
    this->y_rot = _arg;
    return *this;
  }
  Type & set__z_rot(
    const float & _arg)
  {
    this->z_rot = _arg;
    return *this;
  }
  Type & set__w(
    const float & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__dx_trans(
    const float & _arg)
  {
    this->dx_trans = _arg;
    return *this;
  }
  Type & set__dy_trans(
    const float & _arg)
  {
    this->dy_trans = _arg;
    return *this;
  }
  Type & set__dz_trans(
    const float & _arg)
  {
    this->dz_trans = _arg;
    return *this;
  }
  Type & set__dx_rot(
    const float & _arg)
  {
    this->dx_rot = _arg;
    return *this;
  }
  Type & set__dy_rot(
    const float & _arg)
  {
    this->dy_rot = _arg;
    return *this;
  }
  Type & set__dz_rot(
    const float & _arg)
  {
    this->dz_rot = _arg;
    return *this;
  }
  Type & set__dw(
    const float & _arg)
  {
    this->dw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fw_msgs::msg::StateEstQuat_<ContainerAllocator> *;
  using ConstRawPtr =
    const fw_msgs::msg::StateEstQuat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fw_msgs::msg::StateEstQuat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fw_msgs::msg::StateEstQuat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fw_msgs::msg::StateEstQuat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fw_msgs::msg::StateEstQuat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fw_msgs::msg::StateEstQuat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fw_msgs::msg::StateEstQuat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fw_msgs::msg::StateEstQuat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fw_msgs::msg::StateEstQuat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fw_msgs__msg__StateEstQuat
    std::shared_ptr<fw_msgs::msg::StateEstQuat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fw_msgs__msg__StateEstQuat
    std::shared_ptr<fw_msgs::msg::StateEstQuat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateEstQuat_ & other) const
  {
    if (this->x_trans != other.x_trans) {
      return false;
    }
    if (this->y_trans != other.y_trans) {
      return false;
    }
    if (this->z_trans != other.z_trans) {
      return false;
    }
    if (this->x_rot != other.x_rot) {
      return false;
    }
    if (this->y_rot != other.y_rot) {
      return false;
    }
    if (this->z_rot != other.z_rot) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->dx_trans != other.dx_trans) {
      return false;
    }
    if (this->dy_trans != other.dy_trans) {
      return false;
    }
    if (this->dz_trans != other.dz_trans) {
      return false;
    }
    if (this->dx_rot != other.dx_rot) {
      return false;
    }
    if (this->dy_rot != other.dy_rot) {
      return false;
    }
    if (this->dz_rot != other.dz_rot) {
      return false;
    }
    if (this->dw != other.dw) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateEstQuat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateEstQuat_

// alias to use template instance with default allocator
using StateEstQuat =
  fw_msgs::msg::StateEstQuat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fw_msgs

#endif  // FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__STRUCT_HPP_
