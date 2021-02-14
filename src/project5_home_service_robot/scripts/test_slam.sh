#!/bin/sh
xterm  -e  " roslaunch my_robot world.launch" &
sleep 20
xterm  -e  " roslaunch my_robot gmapping.launch" &
sleep 10
xterm  -e  " roslaunch turtlebot_rviz_launchers view_navigation.launch" &
sleep 15
xterm  -e  " rosrun teleop_twist_keyboard teleop_twist_keyboard.py"
