# Project 5: Home Service Robot

### **Final output**:

2D occupancy grid map      |  Gazebo world
:-------------------------:|:-------------------------:
![img1](https://github.com/kvnptl/robo_nd/blob/master/src/project5_home_service_robot/result/2D%20map.png)  |  ![img2](https://github.com/kvnptl/robo_nd/blob/master/src/project5_home_service_robot/result/gazebo%20world.png)

![gif](https://github.com/kvnptl/robo_nd/blob/master/src/project5_home_service_robot/result/home-service-robot.gif)

### Introduction
   - Combine everything learned in this program to simulate a home service robot that can map, localize, and navigate to transport objects, moving from one room to another autonomously. Skills will apply: Path Planning search algorithms, ROS navigation stack, C++.
   
### Overview
   - The custom build mobile robot drives aroung the environment for mapping using `gmapping` package and create an **occupancy grid map**. After having the map, it uses laser range finder and odometry data to localize itself itself by utilizing **Adaptive Monte Carlo Localization (AMCL)**. User can predefine the pick-up and delivery points for the robot, and it uses those navigation goals to autonomously plans trajectory using **Dijikstra algorithm** to accomplish the task. 
   
### Tested on:
   - Ubuntu 18.04
   - ROS Kinetic
   - Gazebo
   - Rviz

### Pre-Requisite: 
   - Install xterm: `sudo apt-get install xterm`
   - To load map (pgm file): `sudo apt-get install ros-${ROS_DISTRO}-map-server`
   - Localization algorithm: `sudo apt-get install ros-${ROS_DISTRO}-amcl`
   - ROS navigation package: `sudo apt-get install ros-${ROS_DISTRO}-move-base`
   - ROS gmapping package: `sudo apt-get install ros-${ROS_DISTRO}-slam-gmapping`
   
### Mapping
   - We will create a map of the environment using Grid SLAM algorithm, and it will generate an occupancy grid map (pgm file) which would be used for localization and navigation tasks.
   - Run `test_slam.sh` to create occupancy grid map (save a map with `rosrun map_server map_saver -f myMap` command)
   - Performed using [ROS `gmapping` package](http://wiki.ros.org/gmapping)

### Localization and Navigation
   - Robot localization is the process of determining where a mobile robot is located with respect to its environment. Here we will use AMCL package to localize the robot in our environment.
   - Run `test_navigation.sh` to navigate around the map by providing 2D Nav Goal from Rviz
   - Performed using [ROS `amcl` package](http://wiki.ros.org/amcl)

### Path planning
   - The path planning and navigation is done using the turtlebot_gazebo package. Under the hood, this is based on Dijkstra's shortest path algorithm, which is a variant of the Uniform Cost Search algorithm. Using a path planning package like this permits a robot to avoid any encountered obstacles in its path by re-planning a new trajectory.
   - Run `home_service_robot.sh` which initiate robot pick-up location and drop-off location, and the robot will plan its trajectory automatically
   - Performed using [ROS `move_base` package](http://wiki.ros.org/move_base)
   
### **How to run**:
      1. Terminal 1: `$(rospack find scripts)/home_service_robot.sh`
    

