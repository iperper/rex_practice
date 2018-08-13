/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: test_filter.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 09 Aug 2018

* MODIFIED: Thu 09 Aug 2018 12:27:34 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/
#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"

#include "color_filter.h"
#include "findObject.h"
#include <stdlib.h>
#include <vector>
#include <iostream>

bool debug = false;

using namespace cv;
using namespace std;

void refilter(int, void*);
void debug_filter();

//images must be global so they can be accessed by trackbar changes
char* img_folder;
const char* display_window = "Display Window";
const char* filter_window = "Color Filters";

Mat filtered_img;
// filters  = {low_H1, up_H1, low_S, up_S, low_V, up_V, low_H2, up_H2} for HSV filter numbers
vector<int> filters = {170, 180, 7, 25, 200, 255, 0, 20, 53, 70};
int img_num;

int main (int argc, char **argv)
{
  if (argc < 3)
  {
    cout << "Not enough parameters" << endl;
    cout << "Usage:\n./stoplight_detection <image_name> <template_name>" << endl;
    return -1;
  }

  img_folder = argv[1];
  int max_img = atoi(argv[2]);
  
  if (argc == 4){
    string inp = argv[3];
    if (inp == "true"){
      debug = true;
    }
   }
  
  namedWindow(display_window, WINDOW_AUTOSIZE);
  namedWindow(filter_window, WINDOW_NORMAL);

  const int max_H = 180;
  const int max_V = 255;
  const int max_S = 255;

  char low_H_label_1[50], up_H_label_1[50];
  char low_S_label_1[50], up_S_label_1[50];
  char low_V_label_1[50], up_V_label_1[50];
  char low_H_label_2[50], up_H_label_2[50];
  char low_H_label_3[50], up_H_label_3[50];
  char filename[50];

  //Setup labels for trackbars 
  sprintf(low_H_label_1, "Low H 1: %d", filters[0]);
  sprintf(up_H_label_1, "Up H 1: %d", filters[1]);
  sprintf(low_S_label_1, "Low S: %d", filters[2]);
  sprintf(up_S_label_1, "Up S: %d", filters[3]);
  sprintf(low_V_label_1, "Low V: %d", filters[4]);
  sprintf(up_V_label_1, "Up V: %d", filters[5]);
  sprintf(low_H_label_2, "Low H 2: %d", filters[6]);
  sprintf(up_H_label_2, "Up H 2: %d", filters[7]);
  sprintf(low_H_label_3, "Low H 3: %d", filters[8]);
  sprintf(up_H_label_3, "Up H 3: %d", filters[9]);
  sprintf(filename, "File: %d", img_num+1);
 
  //Create trackbars for HSV parameters
  createTrackbar(low_H_label_1, filter_window, &filters[0], max_H, refilter);
  createTrackbar(up_H_label_1, filter_window, &filters[1], max_H, refilter);
  createTrackbar(low_S_label_1, filter_window, &filters[2], max_S, refilter);
  createTrackbar(up_S_label_1, filter_window, &filters[3], max_S, refilter);
  createTrackbar(low_V_label_1, filter_window, &filters[4], max_S, refilter);
  createTrackbar(up_V_label_1, filter_window, &filters[5], max_S, refilter);
  createTrackbar(low_H_label_2, filter_window, &filters[6], max_H, refilter);
  createTrackbar(up_H_label_2, filter_window, &filters[7], max_H, refilter);
  createTrackbar(low_H_label_3, filter_window, &filters[8], max_H, refilter);
  createTrackbar(up_H_label_3, filter_window, &filters[9], max_H, refilter);
  createTrackbar(filename, filter_window, &img_num, max_img-1, refilter);
 
  refilter(0,0);

  waitKey(0);

  return 1;
 }

void refilter (int, void*)
{
  char filename[50];
  sprintf(filename, "%s/%04d.bmp", img_folder, img_num+1);
//  cout << "Image name: " << filename << endl;
  Mat img = imread(filename, IMREAD_COLOR);
  filter_color(img, filtered_img, filters, false);
  imshow(display_window, filtered_img);
}

void debug_filter()
{
}

