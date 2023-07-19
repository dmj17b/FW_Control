# Import library for serial coms
import serial
import time
#Import the rclpy library so that its "node" class can be used
import rclpy
from rclpy.node import Node


# Import the string message type
from std_msgs.msg import String
from fw_msgs.msg import CtrlInput


# Defining the class as a node subclass (inherits from rclpy Node class)
class SendCommands(Node):

    # Defining what to do upon class intialization
    def __init__(self):

        # Actually naming the node:
        super().__init__('sendcommands')

        # Set up serial port:
        self.serial_port = serial.Serial('/dev/ttyACM0', 9600)

        # Constructor to create a subscriber with the same arguments
        # as the corresponding publisher:
        # Note: the subscriber does not need any timer definition. The callback gets
        # called as soon as a message is received
        self.subscription = self.create_subscription(
            CtrlInput,
            'ctrl',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    # This is what happens every time the node receives data:
    def listener_callback(self, msg : CtrlInput):
        ail = str(int(msg.ail))
        elev = str(int(msg.elev))
        thr = str(int(msg.thr))
        rud = str(int(msg.rud))
        aux1 = str(int(msg.aux1))
        aux2 = str(int(msg.aux2))
        self.get_logger().info('Control Input Received')
        self.serial_port.write((ail+' '+elev+' '+thr+' '+' '+rud+' '+aux1+' '+aux2+' ').encode())

def main(args=None):
    rclpy.init(args=args)

    # Create the node object:
    s2a = SendCommands()
    # Call ros2 libraries 
    rclpy.spin(s2a)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    s2a.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()