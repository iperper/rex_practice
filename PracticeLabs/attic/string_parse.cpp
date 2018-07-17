//string_parse.cpp

#include <iostream>
#include <stdio.h>
#include "ParseString.h"

using namespace std;

int main(int argc, char **argv){
	if (argc != 2){
		cout << "USAGE string_parse string1,string2,string3" << endl;
		return -1;
	}

	string str = argv[1];
	vector<string> parse_vector = parseString(str);
	
	for (int i=0; i<parse_vector.size(); i++){
		printf("[%i]: [%s] \n", i, parse_vector[i].c_str());
	}

}


