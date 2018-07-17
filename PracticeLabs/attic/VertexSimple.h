#include <string>

class VertexSimple{
	public:
		VertexSimple() {x=0; y=0;};
		~VertexSimple() {};

		void set();
		std::string str_rep() const;
	
	protected:
		int x;
		int y;
};

