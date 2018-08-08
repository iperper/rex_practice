/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: main.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 08 Aug 2018

* MODIFIED: Wed 08 Aug 2018 05:08:31 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/
#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"

#include "color_filter.h"
#include "findObject.h"
#include <vector>
#include <iostream>

bool debug = false;

using namespace cv;
using namespace std;

void refilter(int, void*);
void debug_filter();

//images must be global so they can be accessed by trackbar changes
Mat img, templ;

// filters  = {low_H1, up_H1, low_S, up_S, low_V, up_V, low_H2, up_H2} for HSV filter numbers
vector<int> filters = {160, 180, 7, 40, 250, 255, 0, 8};

int main (int argc, char **argv)
{
  if (argc < 3)
  {
    cout << "Not enough parameters" << endl;
    cout << "Usage:\n./stoplight_detection <image_name> <template_name>" << endl;
    return -1;
  }

  img = imread( argv[1], IMREAD_COLOR );
  templ = imread( argv[2], IMREAD_COLOR );
  cvtColor(templ, templ, COLOR_BGR2GRAY);

  if(img.empty() || templ.empty())
  {
    cout << "Can't read one of the images" << endl;
    return -1;
  }

  if (argc == 4){
    string inp = argv[3];
    if (inp == "true"){
      debug = true;
    }
  }
  
/**  const char* display_window = "Display Window";
  namedWindow(display_window, WINDOW_AUTOSIZE);
  Mat img_display;
  img.copyTo(img_display);

  // filter areas without red or green colors
  Mat filtered_img;

  if (debug){
    debug_filter();
    refilter(0,0);
  }
  else{
    filter_color(img, filtered_img, filters, false);
  }
  
  if (!debug){
  Mat match_results;

  //0: SQDIFF
  //1: SQDIFF NORMED
  //: TM CCORR
  //3: TM CCORR NORMED
  //4: TM COEFF
  //5: TM COEFF NORMED";
  int match_method = TM_CCOEFF; 
  vector<Point> match_locs;
  
  //Get location of best matches 
  findObject(filtered_img, templ, match_results, match_method, match_locs); 

  //Draw rectangle on stoplights
  rectangle( img_display, match_locs[0], Point( match_locs[0].x + templ.cols , match_locs[0].y + templ.rows ), Scalar::all(0), 2, 8, 0 );

  imshow(display_window, img_display);

  imshow("Results", match_results);
  }
**/
  int match_method = TM_CCOEFF;

  for (unsigned int i=1; i<40; i++){
    char filename [50];
    sprintf(filename, "IMAGES_3/%04d.bmp", i);
    cout << filename << endl;
    img = imread(filename, IMREAD_COLOR);
    cvtColor(img, img, COLOR_BGR2GRAY);
    Mat filtered_img, match_results;
  //  filter_color(img, filtered_img, filters, false);
    vector<Point> match_locs;
    findObject(img, templ, match_results, match_method, match_locs);
    rectangle( img, match_locs[0], Point( match_locs[0].x + templ.cols , match_locs[0].y + templ.rows ), Scalar::all(0), 2, 8, 0 );
    char new_filename [50];
    sprintf(new_filename, "TEST_IMAGES/test_%04d.bmp", i);
    imwrite(new_filename, img);
  }

  waitKey(0);

  return 1;
}


void refilter(int, void*)
{
  const char* output_window = "Output";
  namedWindow(output_window, WINDOW_AUTOSIZE);

  Mat filtered_img;
  
  //filter images based on HSV parameters in filter vector
  filter_color(img, filtered_img, filters, false);

//  imwrite("filtered_img.png", filtered_img);
  imshow(output_window, filtered_img);
}


void debug_filter()
{
 const char* filter_window = "Color Filters";
 namedWindow(filter_window, WINDOW_AUTOSIZE);

 const int max_H = 180;
 const int max_V = 255;
 const int max_S = 255;

 char low_H_label_1[50], up_H_label_1[50];
 char low_S_label_1[50], up_S_label_1[50];
 char low_V_label_1[50], up_V_label_1[50];
 char low_H_label_2[50], up_H_label_2[50];

 //Setup labels for trackbars 
 sprintf(low_H_label_1, "Low H 1: %d", filters[0]);
 sprintf(up_H_label_1, "Up H 1: %d", filters[1]);
 sprintf(low_S_label_1, "Low S: %d", filters[2]);
 sprintf(up_S_label_1, "Up S: %d", filters[3]);
 sprintf(low_V_label_1, "Low V: %d", filters[4]);
 sprintf(up_V_label_1, "Up V: %d", filters[5]);
 sprintf(low_H_label_2, "Low H 2: %d", filters[6]);
 sprintf(up_H_label_2, "Up H 2: %d", filters[7]);
 
 //Create trackbars for HSV parameters
 createTrackbar(low_H_label_1, filter_window, &filters[0], max_H, refilter);
 createTrackbar(up_H_label_1, filter_window, &filters[1], max_H, refilter);
 createTrackbar(low_S_label_1, filter_window, &filters[2], max_S, refilter);
 createTrackbar(up_S_label_1, filter_window, &filters[3], max_S, refilter);
 createTrackbar(low_V_label_1, filter_window, &filters[4], max_S, refilter);
 createTrackbar(up_V_label_1, filter_window, &filters[5], max_S, refilter);
 createTrackbar(low_H_label_2, filter_window, &filters[6], max_H, refilter);
 createTrackbar(up_H_label_2, filter_window, &filters[7], max_H, refilter);
}

