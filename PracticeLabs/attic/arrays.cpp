#include <iostream>
#include <cstdlib>

using namespace std;

void print_array(int argc, char **argv){
	for (int i=1; i<argc; i++){
		cout << "numbers[" << i << "]: " << argv[i] << endl;
	}
}
	

int main(int argc, char **argv){
	print_array(argc, argv);

	char* min=argv[1];
	int k=1;
	char* new_array [argc-1];
	bool removed = false;

	for (int i=1; i<argc; i++){
		if (atoi(argv[i]) < atoi(min))
			min = argv[i];
	}

	for (int i=1; i<argc; i++){
		if (removed || argv[i] != min){
			new_array[k] = argv[i];
			k++;
		}
		else
			removed = true;
	}
	cout << "The new array of integers: " << endl;	
	print_array(argc-1, new_array);

	return 0;
}


