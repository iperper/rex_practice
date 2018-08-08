/**
 * @file MatchTemplate_Demo.cpp
 * @brief Sample code to use the function MatchTemplate
 * @author OpenCV team
 */

#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/tracking.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;
using namespace cv;

bool debug = false;

//! [declare]
/// Global Variables
bool use_mask;
Mat img, templ, mask, result, frame, color_mask_1, color_mask_2, color_mask, hsv;
const char* image_window = "Source Image";
const char* result_window = "Result window";
const char* mask_window = "Mask Window";

int match_method;
int max_trackbar = 5;
//! [declare]

char low_H_label_1[50], up_H_label_1[50], low_S_label_1[50], up_S_label_1[50], low_V_label_1[50], up_V_label_1[50];
int low_H_1, low_S_1, low_V_1, up_H_1, up_S_1, up_V_1;
const int max_H = 180;
const int max_V = 255;
const int max_S = 255;

char low_H_label_2[50], up_H_label_2[50], low_S_label_2[50], up_S_label_2[50], low_V_label_2[50], up_V_label_2[50];
int low_H_2, low_S_2, low_V_2, up_H_2, up_S_2, up_V_2;

/// Function Headers
void MatchingMethod( int, void* );

/**
 * @function main
 */
int main( int argc, char** argv )
{
  if (argc < 4)
  {
    cout << "Not enough parameters" << endl;
    cout << "Usage:\n./MatchTemplate_Demo <image_name> <template_name> [<mask_name>]" << endl;
    return -1;
  }

  //! [load_image]
  /// Load image and template
  img = imread( argv[2], IMREAD_COLOR );
  templ = imread( argv[3], IMREAD_COLOR );

  if(argc > 4) {
    use_mask = true;
    mask = imread( argv[4], IMREAD_COLOR );
  }

  if(img.empty() || templ.empty() || (use_mask && mask.empty()))
  {
    cout << "Can't read one of the images" << endl;
    return -1;
  }
  //! [load_image]
  int camera_num = atoi(argv[1]);
  VideoCapture cap = VideoCapture(camera_num);
  if (!cap.isOpened()){
    cout << "Camera cannot be opened" << endl;
    return -1;
  }

 // cap.set(CAP_PROP_FRAME_HEIGHT, 720);
 // cap.set(CAP_PROP_FRAME_WIDTH, 1280);
  
   //! [create_windows]
  /// Create windows
  namedWindow( image_window, WINDOW_AUTOSIZE );
  //namedWindow( result_window, WINDOW_AUTOSIZE );
  namedWindow( mask_window, WINDOW_NORMAL);
  //! [create_windows]
  
  /// Create Trackbar
  const char* trackbar_label = "Method: \n 0: SQDIFF \n 1: SQDIFF NORMED \n 2: TM CCORR \n 3: TM CCORR NORMED \n 4: TM COEFF \n 5: TM COEFF NORMED";
  createTrackbar( trackbar_label, image_window, &match_method, max_trackbar, MatchingMethod );
  //! [create_trackbar]
 
  sprintf(low_H_label_1, "Low H 1: %d", low_H_1);
  sprintf(up_H_label_1, "Up H 1: %d", up_H_1);
  sprintf(low_S_label_1, "Low S: %d", low_S_1);
  sprintf(up_S_label_1, "Up S: %d", up_S_1);
  sprintf(low_V_label_1, "Low V: %d", low_V_1);
  sprintf(up_V_label_1, "Up V: %d", up_V_1);
  sprintf(low_H_label_2, "Low H 2: %d", low_H_2);
  sprintf(up_H_label_2, "Up H 2: %d", up_H_2);

  createTrackbar(low_H_label_1, mask_window, &low_H_1, max_H, MatchingMethod);
  createTrackbar(up_H_label_1, mask_window, &up_H_1, max_H, MatchingMethod);
  createTrackbar(low_S_label_1, mask_window, &low_S_1, max_S, MatchingMethod);
  createTrackbar(up_S_label_1, mask_window, &up_S_1, max_S, MatchingMethod);
  createTrackbar(low_V_label_1, mask_window, &low_V_1, max_S, MatchingMethod);
  createTrackbar(up_V_label_1, mask_window, &up_V_1, max_S, MatchingMethod);

  //mask 2 
  createTrackbar(low_H_label_2, mask_window, &low_H_2, max_H, MatchingMethod);
  createTrackbar(up_H_label_2, mask_window, &up_H_2, max_H, MatchingMethod);

  //frame = imread("IMAGES/0001.bmp", IMREAD_COLOR);
  for (;;){
    cap >> frame;
    frame.copyTo(img);
//    cvtColor(frame, img, COLOR_BGR2GRAY);
  //  if (debug) cout << "Convert Color 1" << endl;
    cvtColor(frame, hsv, COLOR_BGR2HSV);
    if (debug) cout << "Convert Color 2" << endl;
    MatchingMethod( 0, 0 );
    waitKey(10);
  }
  //! [wait_key]
  waitKey(0);
  return 0;
  //! [wait_key]
}

/**
 * @function MatchingMethod
 * @brief Trackbar callback
 */
void MatchingMethod( int, void* )
{
  //! [copy_source]
  /// Source image to display
  Mat img_display;
  img.copyTo( img_display );
  //! [copy_source]
  //
  //color filtering
  Scalar low_bound_1 = Scalar(low_H_1,low_S_1,low_V_1);
  Scalar up_bound_1 = Scalar(up_H_1, up_S_1, up_V_1);

  Scalar low_bound_2 = Scalar(low_H_2,low_S_1,low_V_1);
  Scalar up_bound_2 = Scalar(up_H_2, up_S_1, up_V_1);

  inRange(hsv, low_bound_1, up_bound_1, color_mask_1);
  inRange(hsv, low_bound_2, up_bound_2, color_mask_2);
  
  color_mask = color_mask_1 | color_mask_2;

  if (debug) cout << "Made mask" << endl;


  //! [create_result_matrix]
  /// Create the result matrix
  int result_cols =  img.cols - templ.cols + 1;
  int result_rows = img.rows - templ.rows + 1;

  result.create( result_rows, result_cols, CV_32FC1 );
  //! [create_result_matrix]

  //! [match_template]
  /// Do the Matching and Normalize
  bool method_accepts_mask = (TM_SQDIFF == match_method || match_method == TM_CCORR_NORMED);
  if (use_mask && method_accepts_mask)
    { matchTemplate( img, templ, result, match_method, mask); }
  else
    { matchTemplate( img, templ, result, match_method); }
  //! [match_template]

  //! [normalize]
//  normalize( result, result, 0, 1, NORM_MINMAX, -1, Mat() );
  //! [normalize]

  //! [best_match]
  /// Localizing the best match with minMaxLoc
  double minVal; double maxVal; Point minLoc; Point maxLoc;
  Point matchLoc;

  minMaxLoc( result, &minVal, &maxVal, &minLoc, &maxLoc, Mat() );
  cout << minVal << " " << maxVal << endl;
  //! [best_match]

  //! [match_loc]
  /// For SQDIFF and SQDIFF_NORMED, the best matches are lower values. For all the other methods, the higher the better
  if( match_method  == TM_SQDIFF || match_method == TM_SQDIFF_NORMED )
    { matchLoc = minLoc; }
  else
    { matchLoc = maxLoc; }
  //! [match_loc]

  //! [imshow]
  /// Show me what you got
  rectangle( img_display, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );
  rectangle( result, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );

  imshow( image_window, img_display );
  //imshow( result_window, result );
  if(debug) cout << "Showing mask" << endl;
  imshow( mask_window, color_mask);
  //! [imshow]

  return;
}

