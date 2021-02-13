#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include "std_msgs/String.h"

// // Define a client for to send goal requests to the move_base server through a SimpleActionClient
// typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;
//
// int main(int argc, char** argv){
//   // Initialize the pick_objects node
//   ros::init(argc, argv, "pick_objects");
//
//   //tell the action client that we want to spin a thread by default
//   MoveBaseClient ac("move_base", true);
//
//   // Wait 5 sec for move_base action server to come up
//   while(!ac.waitForServer(ros::Duration(5.0))){
//     ROS_INFO("Waiting for the move_base action server to come up");
//   }
//
//   move_base_msgs::MoveBaseGoal goal;
//
//   // set up the frame parameters
//   goal.target_pose.header.frame_id = "map";
//   goal.target_pose.header.stamp = ros::Time::now();
//
//   // ************//
//   // sending pick-up location
//   // ************//
//   ros::Publisher acknowledgement_pub = n.advertise<std_msgs::String>("acknowledgement", 1000);
//
//   // Define a position and orientation for the robot to reach
//   goal.target_pose.pose.position.x = 1.0;
//   goal.target_pose.pose.orientation.w = 1.0;
//
//    // Send the goal position and orientation for the robot to reach
//   ROS_INFO("Sending pick-up goal");
//   ac.sendGoal(goal);
//
//   // Wait an infinite time for the results
//   ac.waitForResult();
//
//   // Check if the robot reached its goal
//   if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
//     ROS_INFO("Hooray, the robot reached pick-up goal position");
//     std_msgs::String msg;
//     msg.data = "p";
//     acknowledgement_pub.publish(msg)
//   else
//     ROS_INFO("The robot failed to reach pick-up location for some reason");
//
//   ros::Duration(5).sleep(); // sleep for 5 seconds
//
//   // ************//
//   //sending drop-off location
//   // ************//
//
//   // Define a position and orientation for the robot to reach
//   goal.target_pose.pose.position.y = 3.0;
//   goal.target_pose.pose.orientation.w = 0.0;
//
//   // Send the goal position and orientation for the robot to reach
//   ROS_INFO("Sending drop-off goal");
//   ac.sendGoal(goal);
//
//   // Wait an infinite time for the results
//   ac.waitForResult();
//
//   // Check if the robot reached its goal
//   if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
//     ROS_INFO("Hooray, the robot reached drop-off goal position");
//     std_msgs::String msg;
//     msg.data = "d";
//     acknowledgement_pub.publish(msg)
//   else
//     ROS_INFO("The robot failed to reach drop-off position for some reason");
//
//   return 0;
}
