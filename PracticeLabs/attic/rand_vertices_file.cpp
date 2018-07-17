#include <time.h>
#include <vector>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct vertex{
	int x;
	int y;
};

int main(int argc, char **argv){
	const char * filename;
	int num_vertices;
	for (int i=1; i<argc; i++){
		string argi = argv[i];
		if (argi.find("--filename=") == 0){
			filename = argi.substr(11).c_str();
		}
		if (argi.find("--amt=")==0)
			num_vertices = atoi(argi.substr(6).c_str());
	}

	if (filename == "" || num_vertices == 0 || argc != 3){
		cout << "USAGE rand_vertices_file --filename=test.txt --amt=5" << endl;
	}

	FILE * f;
	srand(time(NULL));
	f = fopen(filename, "w");
	for (int i=0; i<num_vertices; i++){
		string line;
		int x = rand() % 200 - 100;
		int y = rand() % 200 - 100;
		vertex line_obj;
		line_obj.x = x;
		line_obj.y = y;
		fprintf(f, "x= %i,y= %i \n", x, y);
	}
}

