// increasing subsequence
// not solved 

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char* argv[]) {

	int size;
	int arr[1001] = {};	// 수열
	int max[1002][1002] = {};	// 증가수열최대
	int length[1001][1001] = {};	// 증가수열길이
	int subcount = 0;

	//int submax[1001] = {};
	//int sublength[1001] = {};
	

	vector<int>submax;
	int sublength = 0;
	
	cin >> size;
	for (size_t i = 1; i <= size; i++) {
		cin >> arr[i];
	}

	max[0][1] = arr[1];
	length[0][1] = 1;

	for (size_t i = size; i > 0; i--) {
		
		if (arr[i] > max[i-1]) {
			length[0][i] = length[i - 1] + 1;
			max[i] = arr[i];
		}
		else {
			length[i] = length[i - 1];
			max[i] = max[i - 1];
			//sub
			submax.push_back(arr[i]);
			sublength++;

			if (sublength>length[i]) {

			}

		}
	}

	cout << length[size];
	return 0;
}

// 10 20 10 14 15 30 20 60
