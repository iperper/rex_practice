
//SquareV3.cpp

#include "SquareV3.h"

string SquareV3::getSpec() const{
	string spec="type=square";
	spec += SegListV3::getSpec();
	return spec;
}


double SquareV3::getArea() const{
	return (getMaxX()-getMinX())*(getMaxY()-getMinY());
}
