#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
#include "std_msgs/String.h"

// int x = 0;

// void callBack(std_msgs::String ack_msg)
// {
//   ROS_INFO("IN CALLBACK FUNC");
//   if (ack_msg.data == "p")
//   {
//     ROS_INFO("PICK UP x = 1");
//     x = 1;
//   }
//   else if (ack_msg.data == "d")
//   {
//     ROS_INFO("DROP OFF x = 2");
//     x = 2;
//   }
//   // ROS_INFO("I heard: [%s]", msg->data.c_str());
// }

int main( int argc, char** argv )
{
  ros::init(argc, argv, "add_markers");
  ros::NodeHandle n;
  ros::Rate r(1);
  ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 1);

  bool pick_up_acknowledgement = false;
  bool drop_off_acknowledgement = false;

  // Set our initial shape type to be a cube
  uint32_t shape = visualization_msgs::Marker::CUBE;

  visualization_msgs::Marker marker;
  // Set the frame ID and timestamp.  See the TF tutorials for information on these.
  marker.header.frame_id = "map";
  marker.header.stamp = ros::Time::now();

  // Set the namespace and id for this marker.  This serves to create a unique ID
  // Any marker sent with the same namespace and id will overwrite the old one
  marker.ns = "basic_shapes";
  marker.id = 0;

  // Set the marker type.  Initially this is CUBE, and cycles between that and SPHERE, ARROW, and CYLINDER
  marker.type = shape;

  // Set the marker action.  Options are ADD, DELETE, and new in ROS Indigo: 3 (DELETEALL)
  marker.action = visualization_msgs::Marker::ADD;

  // Set the pose of the marker.  This is a full 6DOF pose relative to the frame/time specified in the header
  marker.pose.position.x = -3;
  marker.pose.position.y = 0;
  marker.pose.position.z = 0;
  marker.pose.orientation.x = 0.0;
  marker.pose.orientation.y = 0.0;
  marker.pose.orientation.z = 0.0;
  marker.pose.orientation.w = 1.0;

  // Set the scale of the marker -- 1x1x1 here means 1m on a side
  marker.scale.x = 0.5;
  marker.scale.y = 0.5;
  marker.scale.z = 0.5;

  // Set the color -- be sure to set alpha to something non-zero!
  marker.color.r = 0.0f;
  marker.color.g = 1.0f;
  marker.color.b = 0.0f;
  marker.color.a = 1.0;

  // while (ros::ok())
  while (ros::ok())
  {
    // marker.lifetime = ros::Duration(5);
    ROS_INFO("ROS IS OKKKKK");
    // Publish the marker
    while (marker_pub.getNumSubscribers() < 1)
    {
      if (!ros::ok())
      {
        return 0;
      }
      ROS_WARN_ONCE("Please create a subscriber to the marker 1");
      sleep(1);
    }
    // ROS_INFO("<-----BEFORE MARKER 1 PUBLISH------>");
    marker_pub.publish(marker);
    // ROS_INFO("<-----AFTER MARKER 1 PUBLISH------>");

    n.getParam("pick_up_acknowledgement", pick_up_acknowledgement);
    if (pick_up_acknowledgement) break;
  }
    // ros::Duration(5).sleep(); // sleep for 5 seconds

    // // Cycle between different shapes
    // switch (shape)
    // {
    // case visualization_msgs::Marker::CUBE:
    //   shape = visualization_msgs::Marker::SPHERE;
    //   break;
    // case visualization_msgs::Marker::SPHERE:
    //   shape = visualization_msgs::Marker::ARROW;
    //   break;
    // case visualization_msgs::Marker::ARROW:
    //   shape = visualization_msgs::Marker::CYLINDER;
    //   break;
    // case visualization_msgs::Marker::CYLINDER:
    //   shape = visualization_msgs::Marker::CUBE;
    //   break;
    // }

    //robot odometry subscriber
    // ros::Subscriber sub = n.subscribe("acknowledgement", 1000, callBack);
    ros::Duration(5).sleep();
    marker.action = visualization_msgs::Marker::DELETE;
    marker_pub.publish(marker);

    while(1){
      n.getParam("drop_off_acknowledgement", drop_off_acknowledgement);
      if (drop_off_acknowledgement) break;
    }

    while (ros::ok()){
      // if (x == 1){
      //   ROS_INFO("<-----pick-up acknowledgement received------>");
      //   ros::Duration(5).sleep();
      //   marker.action = visualization_msgs::Marker::DELETE;
      //   marker_pub.publish(marker);
      // }
      // else if (x == 2){
        ROS_INFO("<-----drop-off acknowledgement received------>");
        // Set the namespace and id for this marker.  This serves to create a unique ID
        // Any marker sent with the same namespace and id will overwrite the old one
        marker.ns = "basic_shapes_2";
        marker.id = 1;

        // Set the marker type.  Initially this is CUBE, and cycles between that and SPHERE, ARROW, and CYLINDER
        marker.type = shape;

        // Set the marker action.  Options are ADD, DELETE, and new in ROS Indigo: 3 (DELETEALL)
        marker.action = visualization_msgs::Marker::ADD;

        // Set the pose of the marker.  This is a full 6DOF pose relative to the frame/time specified in the header
        marker.pose.position.x = 0.5;
        marker.pose.position.y = 2;
        marker.pose.position.z = 0;
        marker.pose.orientation.x = 0.0;
        marker.pose.orientation.y = 0.0;
        marker.pose.orientation.z = 0.0;
        marker.pose.orientation.w = 1.0;

        // Set the scale of the marker -- 1x1x1 here means 1m on a side
        marker.scale.x = 0.5;
        marker.scale.y = 0.5;
        marker.scale.z = 0.5;

        // Set the color -- be sure to set alpha to something non-zero!
        marker.color.r = 0.0f;
        marker.color.g = 1.0f;
        marker.color.b = 0.0f;
        marker.color.a = 1.0;

        // marker.lifetime = ros::Duration(10);

        // Publish the marker
        while (marker_pub.getNumSubscribers() < 1)
        {
          if (!ros::ok())
          {
            return 0;
          }
          ROS_WARN_ONCE("Please create a subscriber to the marker 2");
          sleep(1);
        }
        marker_pub.publish(marker);
      }

    // r.sleep();
    // ros::Duration(5).sleep(); // sleep for 5 seconds
    // ROS_INFO("<-----BEFORE SPIN------>");
    // ros::spin();
    // ROS_INFO("<-----AFTER SPIN------>");
  return 0;
}
