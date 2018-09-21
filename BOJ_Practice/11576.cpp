// base conversion

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


int main(int argc, char* argv[]) {
	// A 65 << 10
	// 0 48
	int from, to;
	int nums;
	cin >> from >> to;
	cin >> nums;
	int num[25];
	long long converted = 0;

	for (size_t i = 0; i < nums; i++) {
		cin >> num[i];
	}
	for (size_t i= 0; i<nums; i++) {
		converted += num[i] * pow(from, nums - i-1);
	}
	vector<long long> result;
	while (converted >= to) {
		result.push_back(converted%to);
		converted = converted / to;
	}
	result.push_back(converted);

	for (auto i = result.rbegin(); i < result.rend(); i++) {
		cout << *i << ' ';
	}
	return 0;
}
