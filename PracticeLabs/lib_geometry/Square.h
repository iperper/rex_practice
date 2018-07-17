//Square.h

#ifndef SQUARE
#define SQUARE

#include "SegList.h"
using namespace std;

class Square:public SegList{
	public:
		Square() {};
		~Square() {};
		string getSpec() const;

	};


#endif
