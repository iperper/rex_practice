//shapes_v3.cpp
//
#include <iostream>
#include "TriangleV3.h"
#include "SquareV3.h"
#include <vector>

using namespace std;

int main(){
	TriangleV3 triangle;
	SquareV3 square;
	vector<vector<int>> tri_vertices = {{0,0},{10,0},{5,5}};
	vector<vector<int>> sq_vertices = {{0,0},{10,0},{10,10},{0,10}};

	for (int i=0; i<tri_vertices.size(); i++){
		triangle.addVertex(tri_vertices[i][0], tri_vertices[i][1]);
	}

	for (int i=0; i<sq_vertices.size(); i++){
		square.addVertex(sq_vertices[i][0], sq_vertices[i][1]);
	}

	cout << triangle.getSpec() << endl;
	cout << "Area: " <<  triangle.getArea() << endl;
	cout << square.getSpec() << endl;
	cout << "Area: " << square.getArea() << endl;

	return 0;
}
