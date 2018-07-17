
//SquareV2.cpp

#include "SquareV2.h"

string SquareV2::getSpec() const{
	string spec="type=square";
	spec += SegListV2::getSpec();
	return spec;
}
