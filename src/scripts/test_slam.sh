#!/bin/sh
xterm  -e  " roslaunch turtlebot_gazebo turtlebot_world.launch world_file:=/home/workspace/robo-nd-HSR/src/map/world/test_map.world" &
sleep 5
xterm  -e  " rosrun gmapping slam_gmapping" &
sleep 5
xterm  -e  " roslaunch turtlebot_rviz_launchers view_navigation.launch" &
sleep 5
xterm  -e  " roslaunch turtlebot_teleop keyboard_teleop.launch"
