//TriangleV4.cpp

#include "TriangleV4.h"
using namespace std;

string TriangleV4::getSpec() const{
	string spec = "type=triangle,";
	spec += SegListV4::getSpec();
	return spec;
}

double TriangleV4::getArea() const{
	return ((getMaxX()-getMinX())*(getMaxY()-getMinY()))/2;
}
