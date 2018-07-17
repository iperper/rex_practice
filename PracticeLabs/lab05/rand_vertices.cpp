
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <unistd.h>

using namespace std;

struct Vertex{
	int x;
	int y;
};


int main(int argc, char **argv){
	
	vector<Vertex> vertices;
	unsigned long int tseed = time(NULL);
	unsigned long int pseed = getpid() + 1;

	unsigned int rseed = (tseed*pseed) & 50000;

	cout << "time_seed: " << tseed << endl;
	cout << "pid_seed: " << pseed << endl;
	cout << "rand_seed: " << rseed << endl;

	srand(rseed);

	for (int i=0; i<5; i++){
		int x_pt = rand() % 200 - 100;
		int y_pt = rand() % 200 - 100;
		vertices.push_back(Vertex());
		vertices[i].x = x_pt;
		vertices[i].y = y_pt;
			
		printf("x=%i, y=%i \n", x_pt, y_pt);
	}	


}


