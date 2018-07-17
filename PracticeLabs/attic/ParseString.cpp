//ParseString.cpp

#include "ParseString.h"
#include "BiteString.h"

using namespace std;

vector<string> parseString(string str){
	vector<string> str_vec;

	while(1){
		if (str=="")
			break;
		str_vec.push_back(biteString(str, ','));
	}

	return str_vec;

}
