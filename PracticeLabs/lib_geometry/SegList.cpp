//SegList.cpp

#include "SegList.h"
#include <cmath>

using namespace std;

string SegList::getSpec() const{
	string spec;
	for (unsigned int i=0; i<seg_list.size(); i++){
		if (i !=0)
			spec += ", ";
		spec += seg_list[i].getSpec();	
	}
	return spec;
}

void SegList::addVertex(double x, double y){
	seg_list.push_back(Vertex(x, y));
}

double SegList::totalEdgeLength() const{
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
