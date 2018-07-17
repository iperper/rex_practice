#ifndef TRIANGLE_V4
#define TRIANGLE_V4

#include "SegListV4.h"
using namespace std;

class TriangleV4:public SegListV4{
	public:
		TriangleV4() {};
		~TriangleV4() {};
		string getSpec() const;
		double getArea() const;
};


#endif
