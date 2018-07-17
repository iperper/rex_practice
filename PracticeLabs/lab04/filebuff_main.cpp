#include <iostream>
#include "FileBuffer.h"
#include <vector>

using namespace std;

int main(int argc, char **argv){
	const char* filename;

	for (int i=1; i<argc; i++){
		string argi = argv[i];
		if (argi.find("--filename=") == 0){
			filename = argi.substr(11).c_str();
		}
	}
	
	if (filename == ""){
		cout << "USAGE filebuff --filename=test.txt" << endl;
		return 1;
	}

	vector<string> lines = vectorize_file(filename);
	
	cout << "Total Lines: " << lines.size() << endl;
   	for(unsigned int i=0; i<lines.size(); i++) 
	   	cout << "line: [" << lines[i] << "]" << endl; 
	
   return(0);

}


