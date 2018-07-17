// SegList.h
//
//
#ifndef SEGLIST_HEADER
#define SEGLIST_HEADER

#include <vector>
#include "Vertex.h"

class SegList{

	public:
		SegList() {};
		~SegList() {};
		
		void addVertex(double x, double y);
		void addVertex(Vertex vertex) {seg_list.push_back(vertex);};

		unsigned int size() {return(seg_list.size());};
		double totalEdgeLength() const;
		std::string getSpec() const;

	protected:
		std::vector<Vertex> seg_list;
		std::string			m_label;
};

#endif
