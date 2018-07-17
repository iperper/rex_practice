// string_deserial.cpp
//
#include "ParseString.h"
#include "BiteString.h"
#include "Vertex.h"
#include "FileBuffer.h"
#include <iostream>
//#include <stdio.h>

int main(int argc, char **argv){

	const char* filename;

	for (int i=1; i<argc; i++){
		string argi = argv[i];
		if (argi.find("--filename=") == 0){
			filename = argi.substr(11).c_str();
		}
	}

	if (filename == "" || argc != 2){
		cout << "USAGE string_deserial --filename=test.txt" << endl;
		return 1;
	}

	FILE * f = fopen(filename, "r");
	
	if (!f){
		cout << "Could not open file: " << filename << endl;
		return -1;
	}
	
	vector<string> lines = vectorize_file(filename);
	
	cout << "Total vertices found: " << lines.size() << endl;
	
	vector<Vertex> vertices;

	for (int i=0; i<lines.size(); i++){
		vector<string> line_vals = parseString(lines[i]);
		//cout << "Line " << i << " " <<  line_vals[0] << " " << line_vals[1] << endl;

		string m0 = biteString(line_vals[0], '=');
		string m1 = biteString(line_vals[1], '=');
		Vertex vertex;
		string mx, my;
		
		//cout << "M0, m1" << m0 << "," << m1 << endl;

		if (m0 == "x"){
			mx = line_vals[0];
		}

		if (m1 == "y"){
			my = line_vals[1];
		}

		vertex.setXY(atoi(mx.c_str()), atoi(my.c_str()));
		vertices.push_back(vertex);
		
		printf("Vertex %i: x=%s, y=%s \n", i, mx.c_str(), my.c_str());
	}

	return 0;

}
