
// SegListV3.h
//
//
#ifndef SEGLISTV3_HEADER
#define SEGLISTV3_HEADER

#include <vector>
#include "Vertex.h"

class SegListV3{

	public:
		SegListV3() {};
		~SegListV3() {};
		
		void addVertex(double x, double y);
		void addVertex(Vertex vertex) {seg_list.push_back(vertex);};

		unsigned int size() {return(seg_list.size());};
		double totalEdgeLength() const;
		double getPerimeter() const;
		std::string getSpec() const;

		double getMinX() const;
		double getMinY() const;
		double getMaxX() const;
		double getMaxY() const;


	protected:
		std::vector<Vertex> seg_list;
		std::string			m_label;
};

#endif
