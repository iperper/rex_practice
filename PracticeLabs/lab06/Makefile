all: string_split string_bite string_parse string_deserial

string_split: string_split.cpp
	g++ -o string_split string_split.cpp 

string_bite: ../lib_strings/libstrings.a string_bite.cpp
	g++ -I../lib_strings -L../lib_strings -o string_bite string_bite.cpp -lstrings 

string_parse: ../lib_strings/libstrings.a string_parse.cpp
	g++ -I../lib_strings -L../lib_strings -o string_parse string_parse.cpp -lstrings

string_deserial: ../lib_strings/libstrings.a ../lib_geometry/libgeometry.a string_deserial.cpp
	g++ -I../lib_geometry -L../lib_geometry -I../lib_strings -L../lib_strings -o string_deserial string_deserial.cpp  -lgeometry -lstrings 

clean:
	rm -f string_split string_split_v2 string_bite string_parse string_deserial *~
