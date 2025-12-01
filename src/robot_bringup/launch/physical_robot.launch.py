import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, ExecuteProcess, TimerAction

def generate_launch_description():

    controller_launch = IncludeLaunchDescription(
        os.path.join(get_package_share_directory("robot_controller"), "launch", "hardware_controller.launch.py")
    )

    joint_names = [
        "shoulder_pan",
        "shoulder_lift",
        "elbow_flex",
        "wrist_flex",
        "wrist_roll",
        "gripper",
    ]
    joint_positions = [0.0] * len(joint_names)

    duration = 5.0
    sec = int(duration)
    nsec = int((duration - sec) * 1e9)

    #adding a process that sends the robot to the saved position that places it in the same configuration that is launched for the simulated robot
    send_home = ExecuteProcess(
        cmd=[
            "python3",
            "-c",
            (
                "import rclpy,time;from rclpy.node import Node;"
                "from trajectory_msgs.msg import JointTrajectory,JointTrajectoryPoint;"
                "rclpy.init();n=Node('reset_pose_publisher');"
                f"pub=n.create_publisher(JointTrajectory,'/arm_controller/joint_trajectory',10);"
                "time.sleep(0.8);"  # allow time for connections
                f"names={joint_names!r};pos={joint_positions!r};"
                "msg=JointTrajectory();msg.joint_names=names;"
                "pt=JointTrajectoryPoint();pt.positions=pos;"
                f"pt.time_from_start.sec={sec};pt.time_from_start.nanosec={nsec};"
                "msg.points=[pt];pub.publish(msg);time.sleep(0.5);rclpy.shutdown()"
            ),
        ]
    )

    return LaunchDescription([
        controller_launch,
        TimerAction(period=2.0, actions=[send_home])
    ])
