/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: color_filter.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 08 Aug 2018

* MODIFIED: Thu 09 Aug 2018 12:22:37 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
using namespace cv;

void filter_color ( Mat &orig_img, Mat &out_img, vector<int> &filters, bool debug=false )
{
  int low_H1, up_H1, low_H2, up_H2, low_H3, up_H3;
  int low_S, up_S;
  int low_V, up_V;

  low_H1 = filters[0]; up_H1 = filters[1]; low_S = filters[2]; up_S = filters[3];
  low_V = filters[4]; up_V = filters[5]; low_H2 = filters[6]; up_H2 = filters[7];
  low_H3 = filters[8]; up_H3 = filters[9];

  // create copy of original image to draw circles on

  Mat img_display;
  if (debug){
    orig_img.copyTo( img_display );
    namedWindow("Debug", WINDOW_AUTOSIZE);
  }

  Mat color_mask_1, color_mask_2, color_mask_3, color_mask;

  Mat hsv_img;
  cvtColor(orig_img, hsv_img, COLOR_BGR2HSV);

/*  // Filter values 
  low_H1 = 148; up_H1 = 180; low_H2 = 0; up_H2 = 8;
  low_S = 7; up_S = 42;
  low_V = 200;up_V = 255; */

  Scalar low_bound_1 = Scalar(low_H1, low_S, low_V);
  Scalar up_bound_1 = Scalar(up_H1, up_S, up_V);

  Scalar low_bound_2 = Scalar(low_H2,low_S,low_V);
  Scalar up_bound_2 = Scalar(up_H2, up_S, up_V);

  Scalar low_bound_3 = Scalar(low_H3, low_S, low_V);
  Scalar up_bound_3 = Scalar(up_H3, up_S, up_V);
  
  //Fill masks according to filters
  inRange(hsv_img, low_bound_1, up_bound_1, color_mask_1);
  inRange(hsv_img, low_bound_2, up_bound_2, color_mask_2);
  inRange(hsv_img, low_bound_3, up_bound_3, color_mask_3);
  
  //Create one mask 
  color_mask = color_mask_1 | color_mask_2 | color_mask_3;

  //Locate all non-zero points in the mask to keep in original images
  vector<Point> locations;
  findNonZero(color_mask, locations);

  // create gray_scale img
  cvtColor(orig_img, out_img, COLOR_BGR2GRAY);

  // create mask for use in bitwise_and operation
  Mat full_mask(out_img.size(), out_img.type(), Scalar(0));

  //create boundary circle wherever filtered colro was found
  int circle_radius = 35;
  for (unsigned int i=0; i<locations.size(); i++){
    if (debug) circle(img_display, locations[i], circle_radius, 200);
    circle(full_mask, locations[i], circle_radius, 255, -1); // radius 50
  }

  //apply new mask to gray output image 
  bitwise_and(full_mask, out_img, out_img);

  if(debug)imshow("Debug", img_display);

  return;
}

