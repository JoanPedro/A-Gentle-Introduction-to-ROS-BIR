#include <ros/ros.h>

int main(int argc,char **argv){
  ros::init(argc, argv, "log_once");
  ros::NodeHandle n;
  
  while(ros::ok()){
    ROS_DEBUG_STREAM_ONCE("HEY");
    ROS_INFO_STREAM_ONCE("HEY");
  }
}