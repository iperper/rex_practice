#ifndef TRIANGLE_V3
#define TRIANGLE_V3

#include "SegListV3.h"
using namespace std;

class TriangleV3:public SegListV3{
	public:
		TriangleV3() {};
		~TriangleV3() {};
		string getSpec() const;
		double getArea() const;
};


#endif
