/*----------------------------------------------------------------------*/
 /*  FILE:  filein.cpp  (Fourth C++ Lab Exercise 4)                      */
 /*  WGET:  wget http://oceanai.mit.edu/cpplabs/filein.cpp               */
 /*  BUILD: g++ -o filein filein.cpp                                     */
 /*  RUN:   ./filein --filename=test.txt                                 */
 /*----------------------------------------------------------------------*/

 #include <iostream>      // For the cout function               
 #include <cstdio>        // For the fopen, fclose, fgetc, feof functions

 using namespace std;

 int main(int argc, char **argv)
 {
   // Find the name of the file to be read          
   string filename;
   for(int i=1; i<argc; i++) {
     string argi = argv[i];
     if(argi.find("--filename=") == 0)
       filename = argi.substr(11);
   }

   // If no file specified, produce usage information and exit now.
   if(filename == "") {
     cout << "Usage: filein --filename=test.txt" << endl;
     return(1);
   }

   // Open the specified file for reading and exit with message if failed
   FILE *f = fopen(filename.c_str(), "r");
   if(!f) {
     cout << "Unable to open file: " << filename << endl;
     return(1);
   }

   // Begin reading in file, ending only when end-of-file detected
   string str = "line: [";
   while(1) {
     int c = fgetc(f);

     if(feof(f))
       break;
     if(c == '\n') {
       str += "]";
       cout << str << endl;
       str = "line: [";
     }
     else
       str += c;
   }

   // Make sure we close the file
   fclose(f);
   return(0);
 }
