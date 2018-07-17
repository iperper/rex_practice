// runs the factorial of 10
#include <iostream>
using namespace std;

int main()
{
	int val = 13;
	for (int i=val-1; i>0; i--){
		val *= i;
	}

	cout << val << endl; 

	return 0;
}
