//SquareV2.h

#ifndef SQUARE
#define SQUARE

#include "SegListV2.h"
using namespace std;

class SquareV2:public SegListV2{
	public:
		SquareV2() {};
		~SquareV2() {};
		string getSpec() const;
};


#endif
