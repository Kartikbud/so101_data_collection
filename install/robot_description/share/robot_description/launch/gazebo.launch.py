
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable, IncludeLaunchDescription
from launch.substitutions import Command, LaunchConfiguration #allows us to execute bash commands within the launch file
import os
from pathlib import Path
from ament_index_python.packages import get_package_share_directory #finds a package within a directory

from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():

    robot_description_dir = get_package_share_directory("robot_description")

    model_arg = DeclareLaunchArgument(name="model", 
                                      default_value=os.path.join(robot_description_dir, "so-101", "so101.urdf.xacro"),
                                      description="absolute value to the robot urdf file") #decalring a launch argument for hte launch file

    gazebo_resource_path = SetEnvironmentVariable( #this chunk of code essentially tells gazebo where to look for all the required plugins/libraries and packages, just needs to check the description package
        name="GZ_SIM_RESOURCE_PATH",
        value=[
            str(Path(robot_description_dir).parent.resolve())
        ]
    )

    robot_description = ParameterValue(Command([
        "xacro ", 
        LaunchConfiguration("model")]),
        value_type=str) #essentially defining the description as the urdf model converted to a xacro

    #nodes essentially just require the package name, the rexecvutable name, and a list of the parameters that need to be launched with it
    robot_state_publisher = Node( #defining the robot_state_publisher Node that needs to be launched
        package="robot_state_publisher", 
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description,
                     "use_sim_time": True}]
    )

    gazebo = IncludeLaunchDescription( #embedding the launch file for the actual simulation softawre into this launch file
        PythonLaunchDescriptionSource([
            os.path.join(
                get_package_share_directory("ros_gz_sim"),
                "launch"
            ), "/gz_sim.launch.py"
        ]),
        launch_arguments=[
            ("gz_args", [" -v 4 -r empty.sdf"])
        ]
    )

    gz_spawn_entity = Node(
        package="ros_gz_sim",
        executable="create",
        output="screen",
        arguments=["-topic", "robot_description", #telling gazebo which topic the urdf is being ppublished in
                   "-name", "ur5"]
    )

    gz_ros2_bridge = Node( #converting gazebo messages into ros2 messages
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=[
            "/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock" #converting the gz clock messahes into a rosgraph clock message into the topic "/clock"
        ]
    )

    return LaunchDescription([
        model_arg,
        gazebo_resource_path,
        robot_state_publisher,\
        gazebo,
        gz_spawn_entity,
        gz_ros2_bridge
    ])
