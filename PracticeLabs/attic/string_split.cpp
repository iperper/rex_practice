//string_split.cpp
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char **argv){
	string str = argv[1];

	int split_ind = str.find("=");
	
	string front, back;

	if (split_ind == -1)
		front = str;
	else
		front = str.substr(0, split_ind);

	if (split_ind ==  -1)
		back = "";
	else
		back = str.substr(split_ind+1);

	cout << "Front: [" <<  front.c_str() << "]" << endl;

	cout << "Back: [" << back.c_str() << "]" << endl;

	return 0;
}


