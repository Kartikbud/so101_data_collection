import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription

def generate_launch_description():

    gazebo_launch = IncludeLaunchDescription(
        os.path.join(get_package_share_directory("robot_description"), "launch", "gazebo.launch.py")
    )

    controller_launch = IncludeLaunchDescription(
        os.path.join(get_package_share_directory("robot_controller"), "launch", "controller.launch.py")
    )

    moveit_launch = IncludeLaunchDescription(
        os.path.join(get_package_share_directory("robot_moveit"), "launch", "so101_moveit.launch.py")
    )

    return LaunchDescription([
        gazebo_launch,
        controller_launch,
        moveit_launch
    ])