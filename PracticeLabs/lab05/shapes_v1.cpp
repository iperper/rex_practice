#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include <vector>

using namespace std;

int main(){
	Triangle triangle;
	Square square;
	vector<vector<int>> tri_vertices = {{0,0},{10,0},{5,5}};
	vector<vector<int>> sq_vertices = {{0,0},{10,0},{10,10},{0,10}};

	for (int i=0; i<tri_vertices.size(); i++){
		triangle.addVertex(tri_vertices[i][0], tri_vertices[i][1]);
	}

	for (int i=0; i<sq_vertices.size(); i++){
		square.addVertex(sq_vertices[i][0], sq_vertices[i][1]);
	}

	cout << triangle.getSpec() << endl;
	cout << square.getSpec() << endl;

	return 0;

}
