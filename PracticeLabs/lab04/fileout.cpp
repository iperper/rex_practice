#include <iostream>

using namespace std;

int main(int argc, char **argv){
	const char* filename;
	int name_index;
	string argi;

	for (int i=1; i<argc; i++){
		argi = argv[i];
		if (argi.find("--filename=") == 0)
			filename = argi.substr(11).c_str();
			name_index = i;
	}	
	FILE * file;
	file = fopen(filename, "w");
	for (int i=1; i<argc; i++){
		if (i != name_index){
			argi = argv[i];
			fprintf(file, "%s \n", argi.c_str());
		}
	}
	fclose(file);
	
	return 0;
}	


