#include <iostream>
#include "FileBuffer.h"
#include <vector>

using namespace std;

vector<string> vectorize_file(const char* filename){
// Create a vector of strings. In ANY case this is the return type
   vector<string> fvector;

   // Check that the file can be read. Return empty vector otherwise
   FILE *f = fopen(filename,"r");
   if(!f)
     return(fvector);

   // Create a string buffer to hold each line. Reserve a big size to 
   // allow for efficient growth.
   string strbuff;
   strbuff.reserve(50000);

   // Read in the file one character at a time. Stopping only when the 
   // file pointer points to the end of file.
   while(1) {
     char c = fgetc(f);
     if(feof(f)) {
       if(strbuff.length() != 0)
         fvector.push_back(strbuff);
       break;
     }
     else if(c == '\n') {
       fvector.push_back(strbuff);
       strbuff.clear();
     }
     else
       strbuff.push_back(c);
   }

   // Make sure we close the file.
   fclose(f);

   return(fvector);}



