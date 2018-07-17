#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv){
	
	if (argc != 2 ){
		cout << "Please enter file as --filename=file.txt" << endl;
		return 0;
	}

	const char* filename;
	string cmd = argv[1];
	FILE *fp;

	if (cmd.find("--filename=") != 0){
		cout << "Please enter file as --filename=file.txt" << endl;
		return 0;
	}
	
	else
		filename = cmd.substr(11).c_str();
	
	fp = fopen(filename, "r");
	if (fp == NULL){
		perror("Error in opening file");
		return -1;
	}
	string str = "line: [";
	while (1){
		int c = fgetc(fp);

		if (feof(fp))
			break;
		if (c == '\n'){
			str += "]";
			cout << str << endl;
			str = "line: [";
		}

		else
			str += c;
	}
	
	fclose(fp);
	return 0;

}


