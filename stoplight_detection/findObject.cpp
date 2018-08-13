/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: findObject.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 08 Aug 2018

* MODIFIED: Fri 10 Aug 2018 11:39:55 AM EDT

* CREATED BY: Isaac Perper (with helo from OpenCV demo code)

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#include "opencv2/imgcodecs.hpp"
//#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "findObject.h"
#include <iostream>

using namespace std;
using namespace cv;


double findObject(Mat &img, Mat &templ, Mat &result, int method, vector<Point> &match_locations, int thresh)
{
  //Create properly size image result output
  int result_cols =  img.cols - templ.cols + 1;
  int result_rows = img.rows - templ.rows + 1;
  result.create( result_rows, result_cols, CV_32FC1);


  /**
  cout << "Filtered Type " << img.type() << endl;
  cout << "Template Type " << templ.type() << endl;
  cout << "Result Tyep " << result.type() << endl;
**/

  //Match image with template using template matching method
  matchTemplate( img, templ, result, method);

  //normalize( result, result, 0, 1, NORM_MINMAX, -1, Mat() );

  double minVal; double maxVal; Point minLoc; Point maxLoc;
  Point matchLoc;
  
  //find the max match value
  minMaxLoc( result, &minVal, &maxVal, &minLoc, &maxLoc, Mat() );
  
//  if (maxVal*50/templ.rows > thresh){
 //   cout << maxVal*50/templ.rows << endl;
 // } 
 //cout << maxVal << endl;

  match_locations.push_back(maxLoc);

  return maxVal;
}
