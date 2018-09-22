/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: localizedObjects.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 13 Aug 2018

* MODIFIED: Fri 24 Aug 2018 01:23:49 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/
#include "localizeObjects.h"
#include <iostream>
#include <cmath>

using namespace std;
using namespace Eigen;

vector<vector<double>> localizeObjects(Vector3d &base, double heading, vector<Vector3d> &sats){

  bool debug = false;
  
  double p_y = 1080; // image pixel rows
  double p_x = 1920; // image pixel cols
 // double p_y = 0;
 // double p_x = 0;

  double s_w = 5.856; // image sensor width in mm
  double s_h = 3.276; // image sensor height in mm

  double focal_length = 12; // in mm

  double f_x = 12;
  double f_y = 12;

  // field dimesions from formula: sensor_dim / focal_length = field_dim / distance_to_field

  vector<vector<double>> results;
  
  double rad_heading = heading*M_PI/180;
  Matrix3d rot_matrix_heading, rot_matrix_coords, perspective_matrix;

  rot_matrix_heading << cos(rad_heading), -sin(rad_heading), 0,
             sin(rad_heading), cos(rad_heading), 0,
             0, 0, 1;
  rot_matrix_coords << 1, 0, 0,
                    0, 0, -1,
                    0, 1, 0;

  Matrix3d rot_matrix = rot_matrix_coords*rot_matrix_heading;
  //Matrix3d rot_matrix = rot_matrix_heading;
  //cout << rot_matrix << endl;
 
  perspective_matrix << p_x*f_x/s_w, 0, p_x/2,
                     0, p_y*f_y/s_h, p_y/2,
                     0, 0, 1;

  double x_px, y_px;
  for (unsigned int i=0; i<sats.size(); i++){
    Vector3d camera_vec = rot_matrix*(sats[i]-base);
    cout << "Camera vec: \n" << camera_vec << endl;
    //Vector3d camera_vec2 = rot_matrix_coords*camera_vec;
    //cout << "Camera vec: \n" << camera_vec2 << endl;
    Vector3d film_vec = perspective_matrix*camera_vec/camera_vec(2);
    cout << "Film vec: \n" << film_vec << endl << endl;

  }

  return results;
}



