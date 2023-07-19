// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fw_msgs:msg/StateEstQuat.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__BUILDER_HPP_
#define FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__BUILDER_HPP_

#include "fw_msgs/msg/detail/state_est_quat__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fw_msgs
{

namespace msg
{

namespace builder
{

class Init_StateEstQuat_dw
{
public:
  explicit Init_StateEstQuat_dw(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  ::fw_msgs::msg::StateEstQuat dw(::fw_msgs::msg::StateEstQuat::_dw_type arg)
  {
    msg_.dw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_dz_rot
{
public:
  explicit Init_StateEstQuat_dz_rot(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_dw dz_rot(::fw_msgs::msg::StateEstQuat::_dz_rot_type arg)
  {
    msg_.dz_rot = std::move(arg);
    return Init_StateEstQuat_dw(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_dy_rot
{
public:
  explicit Init_StateEstQuat_dy_rot(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_dz_rot dy_rot(::fw_msgs::msg::StateEstQuat::_dy_rot_type arg)
  {
    msg_.dy_rot = std::move(arg);
    return Init_StateEstQuat_dz_rot(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_dx_rot
{
public:
  explicit Init_StateEstQuat_dx_rot(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_dy_rot dx_rot(::fw_msgs::msg::StateEstQuat::_dx_rot_type arg)
  {
    msg_.dx_rot = std::move(arg);
    return Init_StateEstQuat_dy_rot(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_dz_trans
{
public:
  explicit Init_StateEstQuat_dz_trans(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_dx_rot dz_trans(::fw_msgs::msg::StateEstQuat::_dz_trans_type arg)
  {
    msg_.dz_trans = std::move(arg);
    return Init_StateEstQuat_dx_rot(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_dy_trans
{
public:
  explicit Init_StateEstQuat_dy_trans(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_dz_trans dy_trans(::fw_msgs::msg::StateEstQuat::_dy_trans_type arg)
  {
    msg_.dy_trans = std::move(arg);
    return Init_StateEstQuat_dz_trans(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_dx_trans
{
public:
  explicit Init_StateEstQuat_dx_trans(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_dy_trans dx_trans(::fw_msgs::msg::StateEstQuat::_dx_trans_type arg)
  {
    msg_.dx_trans = std::move(arg);
    return Init_StateEstQuat_dy_trans(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_w
{
public:
  explicit Init_StateEstQuat_w(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_dx_trans w(::fw_msgs::msg::StateEstQuat::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_StateEstQuat_dx_trans(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_z_rot
{
public:
  explicit Init_StateEstQuat_z_rot(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_w z_rot(::fw_msgs::msg::StateEstQuat::_z_rot_type arg)
  {
    msg_.z_rot = std::move(arg);
    return Init_StateEstQuat_w(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_y_rot
{
public:
  explicit Init_StateEstQuat_y_rot(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_z_rot y_rot(::fw_msgs::msg::StateEstQuat::_y_rot_type arg)
  {
    msg_.y_rot = std::move(arg);
    return Init_StateEstQuat_z_rot(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_x_rot
{
public:
  explicit Init_StateEstQuat_x_rot(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_y_rot x_rot(::fw_msgs::msg::StateEstQuat::_x_rot_type arg)
  {
    msg_.x_rot = std::move(arg);
    return Init_StateEstQuat_y_rot(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_z_trans
{
public:
  explicit Init_StateEstQuat_z_trans(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_x_rot z_trans(::fw_msgs::msg::StateEstQuat::_z_trans_type arg)
  {
    msg_.z_trans = std::move(arg);
    return Init_StateEstQuat_x_rot(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_y_trans
{
public:
  explicit Init_StateEstQuat_y_trans(::fw_msgs::msg::StateEstQuat & msg)
  : msg_(msg)
  {}
  Init_StateEstQuat_z_trans y_trans(::fw_msgs::msg::StateEstQuat::_y_trans_type arg)
  {
    msg_.y_trans = std::move(arg);
    return Init_StateEstQuat_z_trans(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

class Init_StateEstQuat_x_trans
{
public:
  Init_StateEstQuat_x_trans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateEstQuat_y_trans x_trans(::fw_msgs::msg::StateEstQuat::_x_trans_type arg)
  {
    msg_.x_trans = std::move(arg);
    return Init_StateEstQuat_y_trans(msg_);
  }

private:
  ::fw_msgs::msg::StateEstQuat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fw_msgs::msg::StateEstQuat>()
{
  return fw_msgs::msg::builder::Init_StateEstQuat_x_trans();
}

}  // namespace fw_msgs

#endif  // FW_MSGS__MSG__DETAIL__STATE_EST_QUAT__BUILDER_HPP_
