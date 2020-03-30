cmake_minimum_required(VERSION 2.8.3)
project(agitr)

## Find catkin and any catkin packages
#find_package(catkin REQUIRED COMPONENTS roscpp geometry_msgs)
find_package(catkin REQUIRED COMPONENTS roscpp )
find_package(catkin REQUIRED COMPONENTS roscpp turtlesim)
## Generate added messages and services
#generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable (hello  src/hello.cpp)
target_link_libraries(hello ${catkin_LIBRARIES})

add_executable (pubvel  src/pubvel.cpp)
target_link_libraries(pubvel ${catkin_LIBRARIES})

add_executable (subpose  src/subpose.cpp)
target_link_libraries(subpose ${catkin_LIBRARIES})

add_executable (spawn_turtle  srv/spawn_turtle.cpp)
target_link_libraries(spawn_turtle ${catkin_LIBRARIES})

add_executable (pubvel_toggle  srv/pubvel_toggle.cpp)
target_link_libraries(pubvel_toggle ${catkin_LIBRARIES})

add_executable (count  src/count.cpp)
target_link_libraries(count ${catkin_LIBRARIES})

add_executable (once  src/once.cpp)
target_link_libraries(once ${catkin_LIBRARIES})

add_executable (throttle  src/throttle.cpp)
target_link_libraries(throttle ${catkin_LIBRARIES})





