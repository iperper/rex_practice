/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: main.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 08 Aug 2018

* MODIFIED: Thu 09 Aug 2018 04:54:57 PM EDT

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
bool filter = false;

using namespace cv;
using namespace std;

void refilter(int, void*);
void debug_filter();

//images must be global so they can be accessed by trackbar changes
Mat img;
vector<Mat> templates;

// filters  = {low_H1, up_H1, low_S, up_S, low_V, up_V, low_H2, up_H2} for HSV filter numbers
vector<int> filters = {160, 180, 7, 40, 250, 255, 0, 8};

int main (int argc, char **argv)
{
  if (argc < 5)
  {
    cout << "Not enough parameters" << endl;
    cout << "Usage:\n./stoplight_detection <template_folder> <# template images> <img_folder> <# test images> <--filter> <debug (true)>" << endl;
    return -1;
  }

char* templ_folder {argv[1]};
int max_templ = atoi(argv[2]);
char* img_folder {argv[3]};
int max_img = atoi(argv[4]);

for (int i=1; i<max_templ+1; i++){
  char filename[50];
  sprintf(filename, "%s/%04d.jpg", templ_folder, i);
  cout << "Template name: " << filename << endl;
  Mat templ = imread(filename, IMREAD_COLOR);
  cvtColor(templ, templ, COLOR_BGR2GRAY);
  templates.push_back(templ);
}
//  img = imread( argv[1], IMREAD_COLOR );
//  templ = imread( argv[2], IMREAD_COLOR );
//  cvtColor(templ, templ, COLOR_BGR2GRAY);

//  if(img.empty() || templ.empty())
//  {
//    cout << "Can't read one of the images" << endl;
//    return -1;
//  }
  if (argc == 6){
    string inp = argv[5];
    if (inp == "--filter"){
      cout << "Filtering color" << endl;
      filter = true;
    }
  }
  if (argc == 7){
    string inp = argv[6];
    if (inp == "true"){
      debug = true;
    }
  }

  int match_method = TM_CCOEFF;
  int match_thresh = 6.0e6;

  for (unsigned int i=1; i<max_img+1; i++){
    cout << "Started new img" << endl;
    char filename [50];
    //cout << "In loop" << endl;
    sprintf(filename, "%s/%04d.bmp", img_folder, i);
    cout << "File: " << filename << endl;
    //cout << filename << endl;
    img = imread(filename, IMREAD_COLOR);

    Mat filtered_img, match_results;
    if (filter){
      filter_color(img, filtered_img, filters, false);
    }
    else{
      img.copyTo(filtered_img);
      cvtColor(filtered_img, filtered_img, COLOR_BGR2GRAY);
    }
    for (int j=1; j<max_templ+1; j++){
      if (debug) cout << "Started templ: " << j << endl;
      Mat display_img;
      img.copyTo(display_img);
      vector<Point> match_locs;
      cout << j << " ";
      findObject(filtered_img, templates[j-1], match_results, match_method, match_locs, match_thresh);

      for (int k=0;k<match_locs.size(); k++){
        rectangle( display_img, match_locs[0], Point( match_locs[0].x + templates[j-1].cols , match_locs[0].y + templates[j-1].rows ), Scalar::all(0), 2, 8, 0 );
      }

      char new_filename [50];
      sprintf(new_filename, "TEST_IMAGES/test_%04d_%04d.bmp", i, j);
      imwrite(new_filename, display_img);
    }
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



