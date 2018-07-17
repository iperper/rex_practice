
#include "Triangle.h"
using namespace std;

string Triangle::getSpec() const{
	string spec = "type=triangle,";
	spec += SegList::getSpec();
	return spec;
}
