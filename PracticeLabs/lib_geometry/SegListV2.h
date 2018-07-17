// SegListV2.h
//
//
#ifndef SEGLISTV2_HEADER
#define SEGLISTV2_HEADER

#include <vector>
#include "Vertex.h"

class SegListV2{

	public:
		SegListV2() {};
		~SegListV2() {};
		
		void addVertex(double x, double y);
		void addVertex(Vertex vertex) {seg_list.push_back(vertex);};

		unsigned int size() {return(seg_list.size());};
		double totalEdgeLength() const;
		double getPerimeter() const;
		std::string getSpec() const;

	protected:
		std::vector<Vertex> seg_list;
		std::string			m_label;
};

#endif
