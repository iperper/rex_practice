all: arrays filein fileout vectors_nosmall filebuff

arrays: arrays.cpp
	g++ -o arrays arrays.cpp

fileout: fileout.cpp
	g++ -o fileout fileout.cpp

filein: filein.cpp
	g++ -o filein filein.cpp

vectors_nosmall: vectors_nosmall.cpp
	g++ -o vectors_nosmall vectors_nosmall.cpp

filebuff: filebuff_main.cpp ../lib_strings/libstrings.a
	g++ -I../lib_strings -L../lib_strings -o filebuff filebuff_main.cpp -lstrings 

clean:
	rm -f arrays arrays_nosmall fileout filein vectors_nosmall filebuff *~
