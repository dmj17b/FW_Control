import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from vicon_receiver.msg import Position
from fw_msgs.msg import CtrlInput

class testcontroller(Node):

    def __init__(self):
        #This is what the node will be named according to ros:
        super().__init__('testcontroller')
        self.publisher_ = self.create_publisher(String,'stuff',10)
        timer_period = 1
        self.timer = self.create_timer(timer_period,self.timer_callback)


    def timer_callback(self):
        msg = String()
        msg.data = 'Hello World'
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: %s' % msg.data)

def main(args=None):
    rclpy.init(args=args)

    ctrl = testcontroller()

    rclpy.spin(ctrl)

    ctrl.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
