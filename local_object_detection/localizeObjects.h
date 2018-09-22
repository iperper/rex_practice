/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: localizeObjects.h

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 13 Aug 2018

* MODIFIED: Fri 24 Aug 2018 11:32:11 AM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#ifndef LOCALIZE_HEADER
#define LOCALIZE_HEADER

#include <vector>
#include <Eigen/Dense>

std::vector<std::vector<double>> localizeObjects(Eigen::Vector3d &base, double heading, std::vector<Eigen::Vector3d> &sats);

#endif
