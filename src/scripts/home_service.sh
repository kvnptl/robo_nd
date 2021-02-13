#!/bin/sh
xterm  -e  " roslaunch my_robot world.launch" &
sleep 20
xterm  -e  " roslaunch my_robot amcl.launch map_file:=/home/workspace/robo_nd/src/map/myMap.yaml" &
sleep 15
xterm  -e  " rosrun rviz rviz -d /home/workspace/robo_nd/src/rvizConfig/rvizConfig.rviz" &
sleep 15
xterm  -e  " rosrun add_markers add_markers"
xterm  -e  " rosrun pick_objects pick_objects"