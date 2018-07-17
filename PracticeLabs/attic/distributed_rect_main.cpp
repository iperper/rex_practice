// disitrbuted_rect_main.cpp


#include <iostream>
#include "CRectangle.h"
using namespace std;

int main(){
	CRectangle rect;
	rect.set_values (3,4);
	cout << "area: " << rect.area() << endl;
	return 0;
}


