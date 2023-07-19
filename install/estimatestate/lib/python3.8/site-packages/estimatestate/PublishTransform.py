import rclpy
import math

from geometry_msgs.msg import TransformStamped
import numpy as np
from tf2_ros import TransformBroadcaster
from rclpy.node import Node
from std_msgs.msg import String
from vicon_receiver.msg import Position
from fw_msgs.msg import CtrlInput
from fw_msgs.msg import PositionEuler


class Quat2Euler(Node):

    def __init__(self):
        #This is what the node will be named according to ros:
        super().__init__('PublishTransform')

        #Create publisher that will output state estimate
        self.publisher_ = self.create_publisher(PositionEuler,'posEuler',10)

        self.tf_broadcaster = TransformBroadcaster(self)

        self.subscription = self.create_subscription(
            Position,
            '/vicon/TestStick/TestStick',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning


    def listener_callback(self, msg : Position):
        self.publishInfo(msg)

    def publishInfo(self,msg:Position):
        pos = PositionEuler()
        pos.x_trans = msg.x_trans
        pos.y_trans = msg.y_trans
        pos.z_trans = msg.z_trans
        q0 = msg.w
        q1 = msg.x_rot
        q2 = msg.y_rot
        q3 = msg.z_rot

        pos.roll = math.atan2(q2*q3 + q0*q1, 0.5-(q1**2+q2**2))
        pos.pitch = math.asin(-2*(q1*q3-q0*q2))
        pos.yaw = math.atan2(q1*q1 + q0*q3,0.5-(q2**2+q3**2))

        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'world'
        # t.child_frame_id = 'none'

        t.transform.translation.x = msg.x_trans
        t.transform.translation.y = msg.y_trans
        t.transform.translation.z = msg.z_trans
        t.transform.rotation.x = msg.x_rot
        t.transform.rotation.y = msg.y_rot
        t.transform.rotation.z = msg.z_rot
        t.transform.rotation.w = msg.w

        self.tf_broadcaster.sendTransform(t)
        self.publisher_.publish(pos)
        

def main(args=None):
    rclpy.init(args=args)

    q2e = Quat2Euler()

    rclpy.spin(q2e)

    q2e.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
