//Vertex.cpp

#include "Vertex.h"
#include <stdlib.h>
#include <sstream>

void Vertex::setRandom(int min, int max){
	setRandom(min, max, min, max);
}

void Vertex::setRandom(int xmin, int xmax, int ymin, int ymax){
	if ((xmin >= xmax) || (ymin >= ymax))
		return;

	m_x = (rand() % (xmax-xmin)) + xmin;	
	m_y = (rand() % (ymax-ymin)) + ymin;

}

std::string Vertex::getSpec() const{
	std::stringstream ss;
	ss <<"x: " << m_x << ",y=" << m_y;
	return ss.str();
}


