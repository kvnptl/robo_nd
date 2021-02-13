#!/bin/sh
xterm  -e  " roslaunch turtlebot_gazebo turtlebot_world.launch world_file:=/home/workspace/robo-nd-HSR/src/map/world/test_map.world" &
sleep 20
xterm  -e  " roslaunch turtlebot_navigation amcl_demo.launch map_file:=/home/workspace/robo-nd-HSR/src/map/pgm_pkg_map/map.yaml" &
sleep 15
xterm  -e  " roslaunch turtlebot_rviz_launchers view_navigation.launch"
