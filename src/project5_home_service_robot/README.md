# Project 5: Home Service Robot

### **Final output**:

![gif](https://github.com/kvnptl/robo_nd/blob/master/src/project5_home_service_robot/home-service-robot.gif)

### Introduction
   - Combine everything learned in this program to simulate a home service robot that can map, localize, and navigate to transport objects, moving from one room to another autonomously. Skills will apply: Path Planning search algorithms, ROS navigation stack, C++.
   
### Overview
   - The custom build mobile robot drives aroung the environment for mapping using `gmapping` package and create an **occupancy grid map**. After having the map, it uses laser range finder and odometry data to localize itself itself by utilizing **Adaptive Monte Carlo Localization (AMCL)**. User can predefine the pick-up and delivery points for the robot, and it uses those navigation goals to autonomously plans trajectory using **Dijikstra algorithm** to accomplish the task. 
   
### Tested on:
   - ROS Kinetic
   
### **How to run**:
      1. Terminal 1: `$(rospack find scripts)/home_service_robot.sh`
    

