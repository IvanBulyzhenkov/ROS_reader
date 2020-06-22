#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>

using namespace std;

int main(int argc, char **argv){
  ros::init(argc, argv, "talker");
  ros::NodeHandle nh;
  double resolution=0.0;
  std::string global_frame;
  std::cout<<"-----------------------"<<std::endl;
  std::cout<<"-----------------------"<<std::endl;
  std::cout<<"-----------------------"<<std::endl;
  if (nh.getParam("/test_namespace/resolution", resolution)){
    std::cout<<"resolution = "<<resolution<<std::endl;
  }
  std::cout<<"-----------------------"<<std::endl;
  if (nh.getParam("/test_namespace/global_frame", global_frame)){
    std::cout<<"global_frame = "<<global_frame<<std::endl;
  }
  std::cout<<"-----------------------"<<std::endl;
  std::cout<<"-----------------------"<<std::endl;
  std::cout<<"-----------------------"<<std::endl;
  return 0;
}
