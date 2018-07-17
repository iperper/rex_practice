//SquareV4.h

#ifndef SQUARE_V4
#define SQUARE_V4

#include "SegListV4.h"
using namespace std;

class SquareV4:public SegListV4{
	public:
		SquareV4() {};
		~SquareV4() {};
		string getSpec() const;
	
		double getArea() const;

};


#endif
