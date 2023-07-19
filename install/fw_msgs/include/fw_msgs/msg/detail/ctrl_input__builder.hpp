// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fw_msgs:msg/CtrlInput.idl
// generated code does not contain a copyright notice

#ifndef FW_MSGS__MSG__DETAIL__CTRL_INPUT__BUILDER_HPP_
#define FW_MSGS__MSG__DETAIL__CTRL_INPUT__BUILDER_HPP_

#include "fw_msgs/msg/detail/ctrl_input__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fw_msgs
{

namespace msg
{

namespace builder
{

class Init_CtrlInput_aux2
{
public:
  explicit Init_CtrlInput_aux2(::fw_msgs::msg::CtrlInput & msg)
  : msg_(msg)
  {}
  ::fw_msgs::msg::CtrlInput aux2(::fw_msgs::msg::CtrlInput::_aux2_type arg)
  {
    msg_.aux2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fw_msgs::msg::CtrlInput msg_;
};

class Init_CtrlInput_aux1
{
public:
  explicit Init_CtrlInput_aux1(::fw_msgs::msg::CtrlInput & msg)
  : msg_(msg)
  {}
  Init_CtrlInput_aux2 aux1(::fw_msgs::msg::CtrlInput::_aux1_type arg)
  {
    msg_.aux1 = std::move(arg);
    return Init_CtrlInput_aux2(msg_);
  }

private:
  ::fw_msgs::msg::CtrlInput msg_;
};

class Init_CtrlInput_rud
{
public:
  explicit Init_CtrlInput_rud(::fw_msgs::msg::CtrlInput & msg)
  : msg_(msg)
  {}
  Init_CtrlInput_aux1 rud(::fw_msgs::msg::CtrlInput::_rud_type arg)
  {
    msg_.rud = std::move(arg);
    return Init_CtrlInput_aux1(msg_);
  }

private:
  ::fw_msgs::msg::CtrlInput msg_;
};

class Init_CtrlInput_thr
{
public:
  explicit Init_CtrlInput_thr(::fw_msgs::msg::CtrlInput & msg)
  : msg_(msg)
  {}
  Init_CtrlInput_rud thr(::fw_msgs::msg::CtrlInput::_thr_type arg)
  {
    msg_.thr = std::move(arg);
    return Init_CtrlInput_rud(msg_);
  }

private:
  ::fw_msgs::msg::CtrlInput msg_;
};

class Init_CtrlInput_elev
{
public:
  explicit Init_CtrlInput_elev(::fw_msgs::msg::CtrlInput & msg)
  : msg_(msg)
  {}
  Init_CtrlInput_thr elev(::fw_msgs::msg::CtrlInput::_elev_type arg)
  {
    msg_.elev = std::move(arg);
    return Init_CtrlInput_thr(msg_);
  }

private:
  ::fw_msgs::msg::CtrlInput msg_;
};

class Init_CtrlInput_ail
{
public:
  Init_CtrlInput_ail()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CtrlInput_elev ail(::fw_msgs::msg::CtrlInput::_ail_type arg)
  {
    msg_.ail = std::move(arg);
    return Init_CtrlInput_elev(msg_);
  }

private:
  ::fw_msgs::msg::CtrlInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fw_msgs::msg::CtrlInput>()
{
  return fw_msgs::msg::builder::Init_CtrlInput_ail();
}

}  // namespace fw_msgs

#endif  // FW_MSGS__MSG__DETAIL__CTRL_INPUT__BUILDER_HPP_
