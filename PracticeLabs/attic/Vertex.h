// Vertex.h

#ifndef VERTEX_HEADER
#define VERTEX_HEADER

#include <string>

class Vertex{
	protected:
		int m_x;
		int m_y;

	public:
		Vertex() {m_x = 0; m_y=0;};
		Vertex(int x, int y) {m_x=x; m_y=y;};
		~Vertex() {};

		void setRandom(int min, int max);
		void setRandom(int xmin, int xmax, int ymin, int ymax);
		void setXY(int x, int y) {m_x=x; m_y=y;};

		int getX() const {return(m_x);};
		int getY() const {return(m_y);};

		std::string getSpec() const;
};

#endif
