#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>
int main(int argc, char **argv)
{
  ros::init(argc, argv, "hello");
  ros::NodeHandle n;

  ROS_INFO_STREAM( " Hello ,ROS! " ) ;

  ros::Rate loop_rate(10);

  return 0;
}