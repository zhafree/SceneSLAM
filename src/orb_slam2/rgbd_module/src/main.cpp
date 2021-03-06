/**
* This file is part of rgbd_module.
*
* Author: tzh
* Date: 2017-03-23
*
*
*/

#include "slam.h"

int  main(int argc, char *argv[])
{
  ros::init(argc, argv, "RGBD");
  rgbd_module::Slam slam;
  slam.Activate();
  ros::spin();
  return 0;
}
