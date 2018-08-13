/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: findObject.h

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 08 Aug 2018

* MODIFIED: Fri 10 Aug 2018 11:40:19 AM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#ifndef MATCH_LIGHT_HEADER
#define MATCH_LIGHT_HEADER

#include "opencv2/core/mat.hpp"
#include <vector>

using namespace cv;

double findObject(Mat &img, Mat &templ, Mat &result, int method, std::vector<Point> &match_locations, int thresh);

#endif
