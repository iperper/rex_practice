#ifndef TRIANGLE
#define TRIANGLE

#include "SegList.h"
using namespace std;

class Triangle:public SegList{
	public:
		Triangle() {};
		~Triangle() {};
		string getSpec() const;
};


#endif
