#include <stdlib.h>
#include "VertexSimple.h"
#include <sstream>

using namespace std;

void VertexSimple::set() {
	int x_pt = rand() % 200 - 100;
	int y_pt = rand() % 200 - 100;
	x=x_pt; y = y_pt;
}
		
string VertexSimple::str_rep() const {
   stringstream ss;
   ss << "x=" << x << ",y=" << y;
   return(ss.str());
}


