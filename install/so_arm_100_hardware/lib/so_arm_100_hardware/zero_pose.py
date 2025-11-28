#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import argparse

class ZeroPoseTest(Node):
    def __init__(self, wait_time=2.0, topic='/arm_controller/joint_trajectory'):
        super().__init__('zero_pose_test')
        
        # Create publisher for arm controller
        self.arm_pub = self.create_publisher(
            JointTrajectory, 
            topic,
            10)
            
        # Joint names in order
        # Match the joint names defined in the URDF/ros2_control block
        self.joint_names = [
            'shoulder_pan',
            'shoulder_lift',
            'elbow_flex',
            'wrist_flex',
            'wrist_roll',
            'gripper'
        ]
        
        # Send zero pose after specified delay
        self.create_timer(wait_time, self.send_zero_pose)
        self.get_logger().info(f'Will send zero pose command in {wait_time} seconds')

    def send_zero_pose(self):
        msg = JointTrajectory()
        msg.joint_names = self.joint_names
        
        point = JointTrajectoryPoint()
        point.positions = [0.0] * len(self.joint_names)  # All joints to 0
        point.time_from_start.sec = 2  # Take 2 seconds to move
        
        msg.points = [point]
        self.arm_pub.publish(msg)
        self.get_logger().info('Sent zero pose command')

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--wait', type=float, default=2.0,
                      help='Time to wait before sending zero pose (seconds)')
    parser.add_argument('--topic', type=str, default='/arm_controller/joint_trajectory',
                      help='JointTrajectory topic for the arm controller')
    args = parser.parse_args()

    rclpy.init()
    node = ZeroPoseTest(wait_time=args.wait, topic=args.topic)
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main() 
