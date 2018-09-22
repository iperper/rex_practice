/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: boost_test.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 17 Aug 2018

* MODIFIED: Fri 17 Aug 2018 09:20:17 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;

int main()
{
  Matrix3d m;

  m << 0.866, -0.5, 0,
    0.4, 0.866, 0,
    0, 0, 1;

  std::cout << m << std::endl;

  Vector3d pt;
  pt << 0, 1, 5;

  std::cout << m*pt << std::endl;

/**  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << "Here is the matrix m:\n" << m << std::endl;
  VectorXd v(2);
  v(0) = 4;
  v(1) = v(0) - 1;
  std::cout << "Here is the vector v:\n" << v << std::endl;**/
}
