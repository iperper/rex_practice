libstrings.a : BiteString.cpp BiteString.h FileBuffer.cpp FileBuffer.h ParseString.cpp ParseString.h
	g++ -c BiteString.cpp FileBuffer.cpp ParseString.cpp
	ar cr libstrings.a BiteString.o FileBuffer.o ParseString.o

clean:
	rm -f BiteString.o FileBuffer.o ParseString.o libstrings.a *~
