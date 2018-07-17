//shapes_v4.cpp
//
#include <iostream>
#include "TriangleV4.h"
#include "SquareV4.h"
#include <vector>

using namespace std;

int main(){
	TriangleV4 triangle;
	SquareV4 square;
	vector<vector<int>> tri_vertices = {{0,0},{10,0},{5,5}};
	vector<vector<int>> sq_vertices = {{0,0},{10,0},{10,10},{0,10}};

	for (int i=0; i<tri_vertices.size(); i++){
		triangle.addVertex(tri_vertices[i][0], tri_vertices[i][1]);
	}

	for (int i=0; i<sq_vertices.size(); i++){
		square.addVertex(sq_vertices[i][0], sq_vertices[i][1]);
	}
	
	SegListV4 *shape1 = &triangle;
	SegListV4 *shape2 = &square;

	cout << shape1->getSpec() << endl;
	cout << "Area: " <<  shape1->getArea() << endl;
	cout << shape2->getSpec() << endl;
	cout << "Area: " << shape2->getArea() << endl;

	return 0;
}
