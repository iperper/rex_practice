 #include <sstream>
 #include "VertexSimple_ans.h"

 using namespace std;

 //-----------------------------------------------------------------------
 // Procedure: getSpec()

 string VertexSimple::getSpec() const
 {
   stringstream ss;
   ss << "x=" << m_x << ",y=" << m_y;
   return(ss.str());
 }

 //-----------------------------------------------------------------------
 // Procedure: setRandom()

 void VertexSimple::setRandom(int min, int max) 
 {
   if(min >= max)
     return;

   int range = max - min;
   m_x = (rand() % range) + min;
   m_y = (rand() % range) + min;
}
