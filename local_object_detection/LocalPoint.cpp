/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: LocalPoint.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 13 Aug 2018

* MODIFIED: Fri 17 Aug 2018 08:24:48 AM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#include "LocalPoint.h"
#include <cmath>

LocPoint::LocPoint(double x, double y, double h)
{
  x_loc = x;
  y_loc = y;
  height = h;
}

double LocPoint::getDistance2D(LocPoint &other)
{
  return hypot(other.x_loc - x_loc, other.y_loc - y_loc);
}

double LocPoint::getLength()
{
  return hypot(hypot(x_loc, y_loc), height);
}

LocPoint LocPoint::diff(LocPoint &other)
{
  LocPoint pt;
  pt.x_loc = x_loc - other.x_loc;
  pt.y_loc = y_loc - other.y_loc;
  pt.height = height - other.height;

  return pt;
}

//Procedure angle
//Returns: angle of vector with respect to positive y axis
double LocPoint::angle2D()
{
  return (atan2(x_loc, y_loc));
}


