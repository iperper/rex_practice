//rand_seglist.cpp
//

#include <iostream>
#include <cstdlib>
#include "SegList.h"

using namespace std;

int main(int argc, char **argv){
	// get file name and number of vertices to make
   string filename;
   int    amount = 0;
   for(int i=1; i<argc; i++) {
     string argi = argv[i];
     if(argi.find("--filename=") == 0)
       filename = argi.substr(11);
     else if(argi.find("--amt=") == 0) {
       string str_amt = argi.substr(6);
       amount = atoi(str_amt.c_str());
     }
   }
	// Return usage if incorrect inputs
   if((filename=="") || (amount<=0)) {
     cout << "Usage: rand_vertices_class --filename=FILE --amt=AMT" << endl;
     return(1);
   }
   
	Segments seg_list;
	for (int i=0; i<amount; i++){
		Vertex vertex;
		vertex.setRandom(-100, 100);
		seg_list.addVertex(vertex);
	//	cout << vertex.getSpec() << endl;
	}

	
	FILE *f = fopen(filename.c_str(), "w");

	if (!f) {
		cout << "Unable to open file: " << filename << endl;
		return 1;
	}

	string seglist_spec = seg_list.getSpec();
	fprintf(f, "%s\n", seglist_spec.c_str());

	fclose(f);

	return 0;
	}
