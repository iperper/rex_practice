#include <iostream>
using namespace std;

bool printmessage(bool& caps, string inputs="Hey there. How are you doing"){
	cout << inputs << endl;

	bool large = false;

	if (inputs.length() > 10)
		large = true;

	if (inputs.length() > 0 && inputs[0] >= 65 && inputs[0] <= 90)
		caps = true;

	return large;
}

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

	
