#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from robot_msgs.srv import EulerToQuaternion, QuaternionToEuler
from tf_transformations import quaternion_from_euler, euler_from_quaternion
import transforms3d

class AnglesConverter(Node):
    def __init__(self):
        super().__init__("angle_conversion_service_server")
        #creating two services, defining their message interface, name, and callback
        self.euler_to_quaternion = self.create_service(EulerToQuaternion, "euler_to_quaternion", self.eulerToQuaternionCallback)
        self.quaternion_to_euler = self.create_service(QuaternionToEuler, "quaternion_to_euler", self.quaternionToEulerCallback)
        self.get_logger().info("Angle conversion services are ready")
    
    def eulerToQuaternionCallback(self, req, res):
        self.get_logger().info(f"requeted to convert euler angles roll: {req.roll}, pitch: {req.pitch}, yaw: {req.yaw} into a quaternion")
        (res.x, res.y, res.z, res.w) = quaternion_from_euler(req.roll, req.pitch, req.yaw) #using inbuilt function to convert the two
        self.get_logger().info(f"corresponding quaternion x: {res.x}, y: {res.y}, z: {res.z}, w: {res.w}")
        return res

    def quaternionToEulerCallback(self,req, res):
        self.get_logger().info(f"requested to convert quaternion x: {req.x}, y: {req.y}, z: {req.z}, w: {req.w} into euler")
        (res.roll, res.pitch, res.yaw) = euler_from_quaternion([req.x, req.y, req.z, req.w]) #using inbuilt function
        self.get_logger().info(f"corresponding euler roll: {res.roll}, pitch: {res.pitch}, yaw: {res.yaw}")
        return res

def main():
    rclpy.init()
    angles_converter = AnglesConverter()
    rclpy.spin(angles_converter)
    angles_converter.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
    