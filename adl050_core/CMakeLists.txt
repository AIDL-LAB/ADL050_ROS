cmake_minimum_required(VERSION 3.0.2)
project(adl050_core)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  tf
  nav_msgs
  adl050_msgs
)

catkin_package(
 LIBRARIES adl050_core
 CATKIN_DEPENDS roscpp std_msgs tf nav_msgs
)

include_directories(
  include 
  ${catkin_INCLUDE_DIRS}
)

add_executable(adl050_driver src/adl050_driver.cpp)
target_link_libraries(adl050_driver ${catkin_LIBRARIES} )
