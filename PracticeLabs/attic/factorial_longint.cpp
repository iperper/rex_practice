// computes factorial with two int types
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 2) {
		cerr << "Usage: " << argv[0] << " NUMBER" << endl;
		return 1;
	}

	int val = atoi(argv[1]);
	long int val2 = atoi(argv[1]);

	for (int i=val-1; i>0; i--){
		val *= i;
		val2 *= i;
	}
	string start_str = " is: ";
	string end_1 = "(using int)";
	string end_2 = "(using long int)";
	cout << start_str << val << end_1 << endl;
	cout << start_str << val2 << end_2 << endl;

	return 0;
}
