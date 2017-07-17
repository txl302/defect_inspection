//spawn the frigs on the conveyor

#include <ros/ros.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <gazebo_msgs/SpawnModel.h>
#include <gazebo_msgs/ApplyBodyWrench.h>
#include <std_msgs/Int8MultiArray.h>


std::string intToString(int a) {
    std::stringstream ss;
    ss << a;
    return ss.str();
}

int main(int argc, char **argv) {

	return 0;
}
