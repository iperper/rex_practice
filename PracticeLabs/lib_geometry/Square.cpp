//Square.cpp

#include "Square.h"

string Square::getSpec() const{
	string spec="type=square";
	spec += SegList::getSpec();
	return spec;
}


