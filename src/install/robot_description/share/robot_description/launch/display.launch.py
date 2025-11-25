
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, LaunchConfiguration #allows us to execute bash commands within the launch file
import os
from ament_index_python.packages import get_package_share_directory #finds a package within a directory


def generate_launch_description():
    model_arg = DeclareLaunchArgument(name="model", 
                                      default_value=os.path.join(get_package_share_directory("robot_description"), "so-101", "so101.urdf.xacro"),
                                      description="absolute value to the robot urdf file") #decalring a launch argument for hte launch file

    robot_description = ParameterValue(Command(["xacro ", LaunchConfiguration("model")])) #essentially defining the description as the urdf model converted to a xacro
    
    #nodes essentially just require the package name, the rexecvutable name, and a list of the parameters that need to be launched with it
    robot_state_publisher = Node( #defining the robot_state_publisher Node that needs to be launched
        package="robot_state_publisher", 
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description}]
    )

    joint_state_publisher_gui = Node(
        package="joint_state_publisher_gui",
        executable="joint_state_publisher_gui"
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen", #decalring that we want the logs of the node to be displayed
        arguments=["-d", os.path.join(get_package_share_directory("robot_description"), "rviz", "display.rviz")] #declaring the argument which allows us to use the saved rviz configuration
    )
    
    return LaunchDescription([
        model_arg,
        robot_state_publisher,
        joint_state_publisher_gui,
        rviz_node
    ]) 
