//TriangleV3.cpp

#include "TriangleV3.h"
using namespace std;

string TriangleV3::getSpec() const{
	string spec = "type=triangle,";
	spec += SegListV3::getSpec();
	return spec;
}

double TriangleV3::getArea() const{
	return ((getMaxX()-getMinX())*(getMaxY()-getMinY()))/2;
}
