#ifndef TRIANGLE_V2
#define TRIANGLE_V2

#include "SegListV2.h"
using namespace std;

class TriangleV2:public SegListV2{
	public:
		TriangleV2() {};
		~TriangleV2() {};
		string getSpec() const;
};


#endif
