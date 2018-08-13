/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: test_finder.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 10 Aug 2018

* MODIFIED: Sat 11 Aug 2018 06:41:59 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/
#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"

#include "findObject.h"
#include <stdlib.h>
#include <vector>
#include <iostream>

bool debug = false;

using namespace cv;
using namespace std;

void reshift(int, void*);

//images must be global so they can be accessed by trackbar changes
char* img_folder;
char* template_file;
const char* display_window = "Display Window";
const char* shifter_window = "Box Shifters";

Mat template_img;
// shifts  = {low_H1, up_H1, low_S, up_S, low_V, up_V, low_H2, up_H2} for HSV filter numbers
vector<int> shifts = {90, 70, 370, 66, 498, 96, 596, 106, 657, 108, 800, 101};
int img_num;

int main (int argc, char **argv)
{
  if (argc < 3)
  {
    cout << "Not enough parameters" << endl;
    cout << "Usage:\n./test_finder <image_folder> <# imgs in folder> <template_name>" << endl;
    return -1;
  }

  img_folder = argv[1];
  int max_img = atoi(argv[2]);

  template_file = argv[3];
  template_img = imread(template_file, IMREAD_COLOR);
  cvtColor(template_img, template_img, COLOR_BGR2GRAY);
  
  if (argc == 4){
    string inp = argv[3];
    if (inp == "true"){
      debug = true;
    }
   }
  
  namedWindow(display_window, WINDOW_AUTOSIZE);
  namedWindow(shifter_window, WINDOW_NORMAL);

  const int max_shift = 2000;

  char x_1_label[50], y_1_label[50];
  char x_2_label[50], y_2_label[50];
  char x_3_label[50], y_3_label[50];
  char x_4_label[50], y_4_label[50];
  char x_5_label[50], y_5_label[50];
  char x_6_label[50], y_6_label[50];
  char filename[50];

  //Setup labels for trackbars 
  sprintf(x_1_label, "X Shift 1: %d", shifts[0]);
  sprintf(y_1_label, "Y Shift 1: %d", shifts[1]);
  sprintf(x_2_label, "X Shift 2: %d", shifts[2]);
  sprintf(y_2_label, "Y Shift 2: %d", shifts[3]);
  sprintf(x_3_label, "X Shift 3: %d", shifts[4]);
  sprintf(y_3_label, "Y Shift 3: %d", shifts[5]);
  sprintf(x_4_label, "X Shift 4: %d", shifts[6]);
  sprintf(y_4_label, "Y Shift 4: %d", shifts[7]);
  sprintf(x_5_label, "X Shift 5: %d", shifts[8]);
  sprintf(y_5_label, "Y Shift 5: %d", shifts[9]);
  sprintf(x_6_label, "X Shift 6: %d", shifts[10]);
  sprintf(y_6_label, "Y Shift 6: %d", shifts[11]);
  sprintf(filename, "File: %d", img_num+1);
 
  //Create trackbars for HSV parameters
  createTrackbar(x_1_label, shifter_window, &shifts[0], max_shift, reshift);
  createTrackbar(y_1_label, shifter_window, &shifts[1], max_shift, reshift);
  createTrackbar(x_2_label, shifter_window, &shifts[2], max_shift, reshift);
  createTrackbar(y_2_label, shifter_window, &shifts[3], max_shift, reshift);
  createTrackbar(x_3_label, shifter_window, &shifts[4], max_shift, reshift);
  createTrackbar(y_3_label, shifter_window, &shifts[5], max_shift, reshift);
  createTrackbar(x_4_label, shifter_window, &shifts[6], max_shift, reshift);
  createTrackbar(y_4_label, shifter_window, &shifts[7], max_shift, reshift);
  createTrackbar(x_5_label, shifter_window, &shifts[8], max_shift, reshift);
  createTrackbar(y_5_label, shifter_window, &shifts[9], max_shift, reshift);
  createTrackbar(x_6_label, shifter_window, &shifts[10], max_shift, reshift);
  createTrackbar(y_6_label, shifter_window, &shifts[11], max_shift, reshift);
  createTrackbar(filename, shifter_window, &img_num, max_img-1, reshift);
 
  reshift(0,0);

  waitKey(0);

  return 1;
 }

void reshift(int, void*)
{
  char filename[50];
  sprintf(filename, "%s/%04d.bmp", img_folder, img_num+1);
//  cout << "Image name: " << filename << endl;
  Mat filtered_img, img_copy;
  Mat img = imread(filename, IMREAD_COLOR);
  cvtColor(img, img_copy, COLOR_BGR2GRAY);
  vector<Point> match_locs;
  double match_val;
  match_val = findObject(img_copy, template_img, filtered_img, TM_CCOEFF, match_locs, 1);
  putText(img, to_string(match_val), Point(match_locs[0].x+50, match_locs[0].y), FONT_HERSHEY_SIMPLEX, 1, Scalar::all(0));
  //rectangle(img, match_locs[0], Point( match_locs[0].x + template_img.cols , match_locs[0].y + template_img.rows ), Scalar::all(0), 2, 8, 0 );
  int light_size = 70;
  for (int i=0; i<6; i++){
    Point top_left = Point(match_locs[0].x + shifts[2*i], match_locs[0].y + shifts[2*i+1]);
    rectangle(img, top_left, Point(top_left.x + light_size, top_left.y + light_size), Scalar::all(0), 2, 8, 0);
  }
  sprintf(filename, "TEST_IMAGES/%04d.bmp", img_num+1);
  imwrite(filename, img);
  imshow(display_window, img);
}

