
//SegListV2.cpp

#include "SegListV2.h"
#include <cmath>

using namespace std;

string SegListV2::getSpec() const{
	string spec;
	for (unsigned int i=0; i<seg_list.size(); i++){
		if (i !=0)
			spec += ", ";
		spec += seg_list[i].getSpec();	
	}
	return spec;
}

void SegListV2::addVertex(double x, double y){
	seg_list.push_back(Vertex(x, y));
}

double SegListV2::totalEdgeLength() const{
	double total_len;

	for (int i=0; i<seg_list.size(); i++){
		if (i+1 < seg_list.size()){
			double xdst = seg_list[i].getX() - seg_list[i+1].getX();
			double ydst = seg_list[i].getY() - seg_list[i+1].getY();
			double hyp = hypot(xdst, ydst);
			total_len += hyp;
		}
	}

	return total_len;

}

double SegListV2::getPerimeter() const{
	double perimeter = SegListV2::totalEdgeLength();
	double lastX = seg_list[0].getX() - seg_list.back().getX();
	double lastY = seg_list[0].getY() - seg_list.back().getY();
	perimeter += hypot(lastX, lastY);

	return perimeter;
}
