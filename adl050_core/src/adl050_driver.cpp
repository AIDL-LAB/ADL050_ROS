#include <ros/ros.h>
#include <ros/console.h>
#include <adl050_core/adl050_driver.hpp>

using namespace aidl;

int main (int argc, char **argv) {
    ros::init(argc, argv, "adl050_driver");
    ros::NodeHandle nh;
    adl050BodyNode adl050 = adl050BodyNode(&nh);

	ros::AsyncSpinner spinner(0);
    spinner.start();
	
    ROS_INFO("ADL050 Driver Node is started");
	ros::waitForShutdown();
}