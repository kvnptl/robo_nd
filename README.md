# Robotics Software Engineer nanodegree - Udacity

## Introduction

  Begin your exploration into the world of robotics software engineering with a practical, system-focused approach to programming robots using the ROS framework and C++. In addition, learn and apply robotics software engineering algorithms such as localization, mapping, and navigation.
  
  ![image](https://github.com/kvnptl/robo_nd/blob/master/udacity_robo-nd.jpg)

  - [Course link](https://www.udacity.com/course/robotics-software-engineer--nd209)
  - [Syllabus](https://d20vrrgs8k4bvw.cloudfront.net/documents/en-US/nd209_Robo_syllabus_v2.pdf)

## Project list:
###  1. **Build My World** (Gazebo World)
   - Use Gazebo to simulate a robotic environment comprised of a building to house your future robot. Skills you will apply: Gazebo, C++ plugins.
   - TODO: add screenshot from project or GIF
###  2. **Go Chase It!** (ROS Essentials)
   - Use the Robot Operating System (ROS) to design a mobile robot. Then, house your newly-designed robot in the robotic environment you built in Project 1. You will program your robot with C++ to chase a ball through this world. Skills you will apply: catkin workspaces, ROS packages, ROS nodes, ROS launch files, RViz integration, and C++.
   - TODO: add screenshot from project or GIF
###  3. **Where Am I?** (Localization)
   - Use the Monte Carlo Localization algorithm in ROS, in conjunction with sensor data and a map of the world, to estimate a mobile robot’s position and orientation so that your robot can answer the question “Where am I?” Skills you will apply: Localization algorithms: Kalman Filter and MCL, ROS parameters, ROS packages integration, C++.
   
   - **How to run**:
      1. Terminal 1: `roslaunch my_robot world.launch`
      2. Terminal 2: `roslaunch my_robot amcl.launch`
    
   - **Final output**:
   
      ![image1](https://github.com/kvnptl/robo_nd/blob/master/project3_where_am_I/1.png)

      ![image2](https://github.com/kvnptl/robo_nd/blob/master/project3_where_am_I/2.png)


###  4. **Map My World** (Mapping and SLAM)
   - Simultaneous Localization and Mapping (SLAM) can be implemented in a number of ways depending on the sensors used via various ROS packages. Use a ROS SLAM package and simulated sensor data to create an agent that can both map the world around it, and localize within it. Skills you will apply: Mapping and SLAM algorithms, Occupancy Grid Mapping, Grid-based FastSLAM and GraphSLAM, ROS debugging tools, C++.
   - TODO: add screenshot of final rtabmap and GIF of rtab map

   - **How to run**:
      1. Terminal 1: `roslaunch my_robot world.launch`
      2. Terminal 2: `roslaunch my_robot teleop.launch`
      3. Terminal 3: `roslaunch my_robot mapping.launch`
    
   - **Final output**:
   
      ![image1](https://github.com/kvnptl/robo_nd/blob/master/project4_map_my_world/2D%20map%202.png)

      ![image2](https://github.com/kvnptl/robo_nd/blob/master/project4_map_my_world/3D%20map%202.png)


###  5. [**Home Service Robot** (Path Planning and Navigation)](https://github.com/kvnptl/robo_nd/blob/master/src/project5_home_service_robot/README.md)
   - Combine everything learned in this program to simulate a home service robot that can map, localize, and navigate to transport objects, moving from one room to another autonomously. Skills will apply: Path Planning search algorithms, ROS navigation stack, C++.
   
   #### Overview
   - The custom build mobile robot drives aroung the environment for mapping using `gmapping` package and create an **occupancy grid map**. After having the map, it uses laser range finder and odometry data to localize itself itself by utilizing **Adaptive Monte Carlo Localization (AMCL)**. User can predefine the pick-up and delivery points for the robot, and it uses those navigation goals to autonomously plans trajectory using **Dijikstra algorithm** to accomplish the task. 
   
   - **How to run**:
      1. Terminal 1: `$(rospack find scripts)/home_service_robot.sh`
    
   - **Final output**:
 
2D occupancy grid map      |  Gazebo world
:-------------------------:|:-------------------------:
![img1](https://github.com/kvnptl/robo_nd/blob/master/src/project5_home_service_robot/result/2D%20map.png)  |  ![img2](https://github.com/kvnptl/robo_nd/blob/master/src/project5_home_service_robot/result/gazebo%20world.png)

  ![gif](https://github.com/kvnptl/robo_nd/blob/master/src/project5_home_service_robot/result/home-service-robot.gif)

# TODO list
  - Change directory structure to project wise for convenience
  - system requirements to run the projects
