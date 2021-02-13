#!/bin/sh
xterm  -e  " roslaunch my_robot world.launch" &
sleep 20
xterm  -e  " roslaunch my_robot amcl.launch map_file:=/home/workspace/robo_nd/src/map/myMap.yaml" &
sleep 15
xterm  -e  " roslaunch turtlebot_rviz_launchers view_navigation.launch"
