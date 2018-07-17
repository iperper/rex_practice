#include <iostream>
#include "function_sepdef.h"

using namespace std;

int main(int argc, char **argv){
	bool large;
	bool caps=false;

	if (argc == 2)
		large = printmessage (caps, argv[1]);
	else
		large = printmessage (caps);

	if (large)
		cout << "That was a long message." << endl;
	else
		cout << "That was a short message." << endl;

	if (caps)
		cout << "That message was properly capitalized."<< endl;
	else
		cout << "That message was not properly capitalized." << endl;

	return 0;
}
