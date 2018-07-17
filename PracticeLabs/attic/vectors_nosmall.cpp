#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv){
	vector<int> nums;
	for (int i=1; i<argc; i++){
		nums.push_back(atoi(argv[i]));
		printf("numbers[%i]: %s \n", i-1, argv[i]);
	}
	
	cout << "The new array of integers:" << endl;	

	int min_elem = nums[0];
	for (int i=1; i<nums.size(); i++){
		if (nums[i] < min_elem){
			min_elem = nums[i];
		}
	}
	
	int removed = 0;	
	int k = 0;
	for (int i=0; i<nums.size(); i++){
		if (nums[i] == min_elem)
				removed++;
		if (removed>1 || nums[i] != min_elem){
			printf("numbers[%i]: %i \n", k, nums[i]);
			k++;
		}
	}

	return 0;
}


