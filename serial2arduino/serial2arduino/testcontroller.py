import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from vicon_receiver.msg import Position
from fw_msgs.msg import CtrlInput

class testcontroller(Node):

    def __init__(self):
        #This is what the node will be named according to ros:
        super().__init__('testcontroller')

        #Create publisher that will output control inputs for the aircraft
        self.publisher_ = self.create_publisher(CtrlInput,'ctrl',10)

        self.subscription = self.create_subscription(
            Position,
            '/vicon/TestStick/TestStick',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning


    def listener_callback(self, msg : Position):
        self.get_logger().info(f"Z position = {msg.z_trans}")
        self.publishInfo(msg)

    def publishInfo(self,msg:Position):
        ctrl = CtrlInput()
        ctrl.ail = 10.
        ctrl.elev = 20.0
        ctrl.thr = 500.
        ctrl.rud = 250.
        ctrl.aux1 = 420.
        ctrl.aux2 = 69.
        if msg.z_trans > 100:
            ctrl.elev=1000.
        self.publisher_.publish(ctrl)
        
        self.get_logger().info('Publishing: %f' % ctrl.elev)        

def main(args=None):
    rclpy.init(args=args)

    ctrl = testcontroller()

    rclpy.spin(ctrl)

    ctrl.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
