#include <iostream>
#include "BiteString.h"

using namespace std;

int main(int argc, char **argv){
	string str = argv[1];
	
	string front = biteString(str, '=');
	string back = str;

	cout << "Front: [" << front << "]" << endl;
	cout << "Back: [" << back << "]" << endl;

	return 0;
}


