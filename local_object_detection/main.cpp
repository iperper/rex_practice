/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: main.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 13 Aug 2018

* MODIFIED: Fri 31 Aug 2018 05:12:07 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#include "opencv2/highgui.hpp"
#include <vector>
#include <iostream>
#include "localizeObjects.h"

using namespace std;
using namespace Eigen;
//using namespace cv;

bool debug = true;

int main(int argc, char **argv)
{
  Vector3d boat_point(2087.61, 1069.78, 1.5);
  
  cout << "Boat Point: \n" << boat_point(0) << " " << boat_point(1) << endl;
  
  vector<Vector3d> sats {Vector3d(2153.71, 1090.66, 4),
    Vector3d(2159.22, 1070.79, 4), 
    Vector3d(2173.41, 1073.41, 4), 
    Vector3d(2178.29, 1056.95, 4), 
    Vector3d(2180.40, 1052.12, 4),
    Vector3d(2181.56, 1040.08, 4)};

  cout << "Sat points: " << endl;
  
  for (unsigned int i=0; i<sats.size(); i++){
    cout << sats[i](0) << " " << sats[i](1) << "\n";
  }
  cout << endl;
  //if (debug) cout << boat_point.getLength() << endl;
  //if (debug) cout << sats[0].getLength() << endl; 

  vector<vector<double>> locs = localizeObjects(boat_point, 13.2, sats);
  
  return (1);

}

