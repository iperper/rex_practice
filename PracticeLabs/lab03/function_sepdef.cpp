#include "function_sepdef.h"
#include <iostream>
using namespace std;

bool printmessage(bool& caps, string inputs){
	cout << inputs << endl;

	bool large = false;

	if (inputs.length() > 10)
		large = true;

	if (inputs.length() > 0 && inputs[0] >= 65 && inputs[0] <= 90)
		caps = true;

	return large;
}
