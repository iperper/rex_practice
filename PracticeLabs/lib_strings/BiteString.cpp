#include "BiteString.h"

std::string biteString(std::string& str, char c){
	int char_ind = str.find(c);
	std::string val;
	
	if (char_ind == std::string::npos){
		val = str;
		str = "";
	}
	else{
		val = str.substr(0, char_ind);
		str = str.substr(char_ind+1);
	}

	return val;

}

