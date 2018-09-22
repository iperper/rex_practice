/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: LocalPoint.h

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 13 Aug 2018

* MODIFIED: Fri 17 Aug 2018 08:24:52 AM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#ifndef LOCALPOINT_HEADER
#define LOCALPOINT_HEADER

struct LocPoint
{
  LocPoint(){};
  LocPoint(double x, double y, double h);
  ~LocPoint(){};
  double getDistance2D(LocPoint &other);
  double getLength();
  LocPoint diff(LocPoint &other);
  double angle2D();
  
  double x_loc;
  double y_loc;
  double height;
  double dummy_dim = 1;
};

#endif
