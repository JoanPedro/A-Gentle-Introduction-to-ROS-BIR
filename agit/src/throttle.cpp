#include <ros/ros.h>

int main(int argc,char **argv){
  ros::init(argc, argv, "log_throttled");
  ros::NodeHandle n;
  while(ros::ok()){
    ROS_DEBUG_STREAM_THROTTLE(0.1,"HEY");
    ROS_INFO_STREAM_THROTTLE(0.3,"HEY 3");
  }
}