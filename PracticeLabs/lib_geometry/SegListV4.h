
// SegListV4.h
//
//
#ifndef SEGLISTV4_HEADER
#define SEGLISTV4_HEADER

#include <vector>
#include "Vertex.h"

class SegListV4{

	public:
		SegListV4() {};
		~SegListV4() {};
		
		void addVertex(double x, double y);
		void addVertex(Vertex vertex) {seg_list.push_back(vertex);};

		unsigned int size() {return(seg_list.size());};
		double totalEdgeLength() const;
		double getPerimeter() const;
		virtual std::string getSpec() const;

		double getMinX() const;
		double getMinY() const;
		double getMaxX() const;
		double getMaxY() const;
		virtual double getArea() const {return 0;};

	protected:
		std::vector<Vertex> seg_list;
		std::string			m_label;
};

#endif
