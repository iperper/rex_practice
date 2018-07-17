
//SquareV4.cpp

#include "SquareV4.h"

string SquareV4::getSpec() const{
	string spec="type=square";
	spec += SegListV4::getSpec();
	return spec;
}


double SquareV4::getArea() const{
	return (getMaxX()-getMinX())*(getMaxY()-getMinY());
}
