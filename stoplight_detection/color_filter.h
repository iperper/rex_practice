/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: color_filter.h

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 08 Aug 2018

* MODIFIED: Wed 08 Aug 2018 11:42:12 AM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#ifndef COLOR_FILTER_HEADER
#define COLOR_FILTER_HEADER

#include "opencv2/core/mat.hpp"
#include <vector>

//using namespace cv;

void filter_color( cv::Mat &orig_img, cv::Mat &out_img, std::vector<int> &filters, bool debug=false);

#endif
