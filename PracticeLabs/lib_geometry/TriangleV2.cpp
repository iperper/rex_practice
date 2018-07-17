//TriangleV2.cpp

#include "TriangleV2.h"
using namespace std;

string TriangleV2::getSpec() const{
	string spec = "type=triangle,";
	spec += SegListV2::getSpec();
	return spec;
}
