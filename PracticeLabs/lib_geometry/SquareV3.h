//SquareV3.h

#ifndef SQUARE_V3
#define SQUARE_V3

#include "SegListV3.h"
using namespace std;

class SquareV3:public SegListV3{
	public:
		SquareV3() {};
		~SquareV3() {};
		string getSpec() const;
	
		double getArea() const;

};


#endif
