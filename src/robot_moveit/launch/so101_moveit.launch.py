from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from moveit_configs_utils import MoveItConfigsBuilder
import os
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node


def generate_launch_description():
    # Allow switching between simulation time and real time
    is_sim_arg = DeclareLaunchArgument(
        "is_sim",
        default_value="True"
    )

    is_sim = LaunchConfiguration("is_sim")

    # Configure MoveIt for the so101 robot
    moveit_config = (
        MoveItConfigsBuilder("so101", package_name="robot_moveit")
        .robot_description(file_path=os.path.join(get_package_share_directory("robot_description"), "so-101", "so101.urdf.xacro"))
        .robot_description_semantic(file_path="so101_config/so101.srdf")
        .robot_description_kinematics(file_path="so101_config/kinematics.yaml")
        .joint_limits(file_path="so101_config/joint_limits.yaml")
        .pilz_cartesian_limits(file_path="so101_config/pilz_cartesian_limits.yaml")
        .trajectory_execution(file_path=os.path.join(get_package_share_directory("robot_moveit"), "so101_config", "moveit_controllers.yaml"))
        .to_moveit_configs()
    )

    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[moveit_config.to_dict(), {"use_sim_time": is_sim}, {"publish_robot_description_semantic": True}],
        arguments=["--ros-args", "--log-level", "info"]
    )

    rviz_config = os.path.join(get_package_share_directory("robot_moveit"), "so101_config", "moveit.rviz")

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=["-d", rviz_config],
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            moveit_config.joint_limits,
        ],
    )

    return LaunchDescription([
        is_sim_arg,
        move_group_node,
        rviz_node
    ])
