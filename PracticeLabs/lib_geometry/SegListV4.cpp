

//SegListV4.cpp

#include "SegListV4.h"
#include <cmath>

using namespace std;

string SegListV4::getSpec() const{
	string spec;
	for (unsigned int i=0; i<seg_list.size(); i++){
		if (i !=0)
			spec += ", ";
		spec += seg_list[i].getSpec();	
	}
	return spec;
}

void SegListV4::addVertex(double x, double y){
	seg_list.push_back(Vertex(x, y));
}

double SegListV4::totalEdgeLength() const{
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

double SegListV4::getPerimeter() const{
	double perimeter = SegListV4::totalEdgeLength();
	double lastX = seg_list[0].getX() - seg_list.back().getX();
	double lastY = seg_list[0].getY() - seg_list.back().getY();
	perimeter += hypot(lastX, lastY);

	return perimeter;
}

double SegListV4::getMinX() const{
	if(seg_list.size() == 0)
		return 0;
	double min_x = seg_list[0].getX();
	for (unsigned int i=1; i<seg_list.size(); i++){
		if (seg_list[i].getX() < min_x)
			min_x = seg_list[i].getX();
	}

	return min_x;
}

double SegListV4::getMinY() const{
	if(seg_list.size() == 0)
		return 0;
	double min_y = seg_list[0].getY();
	for (unsigned int i=1; i<seg_list.size(); i++){
		if (seg_list[i].getY() < min_y)
			min_y = seg_list[i].getY();
	}

	return min_y;
}

double SegListV4::getMaxX() const{
	if(seg_list.size() == 0)
		return 0;
	double max_x = seg_list[0].getX();
	for (unsigned int i=1; i<seg_list.size(); i++){
		if (seg_list[i].getX() > max_x)
			max_x = seg_list[i].getX();
	}

	return max_x;
}

double SegListV4::getMaxY() const{
	if(seg_list.size() == 0)
		return 0;
	double max_y = seg_list[0].getY();
	for (unsigned int i=1; i<seg_list.size(); i++){
		if (seg_list[i].getY() > max_y)
			max_y = seg_list[i].getY();
	}

	return max_y;
}


