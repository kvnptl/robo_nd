#!/bin/sh
xterm  -e  " roslaunch my_robot world.launch" &
sleep 20
xterm  -e  " roslaunch my_robot amcl.launch map_file:=$(rospack find map)/myMap.yaml" &
sleep 15
xterm  -e  " rosrun rviz rviz -d $(rospack find rviz_config)/rvizConfig.rviz" &
sleep 10
xterm  -e  " rosrun add_markers add_markers" &
sleep 1
xterm  -e  " rosrun pick_objects pick_objects"
