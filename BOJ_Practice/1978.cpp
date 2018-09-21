// prime number
// 알고리즘잊지말기 유클리드호제법

#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, char* argv[]) {
	
	int cnt;
	cin >> cnt;

	int nums[100] = {};
	int board[1001] = {};
	for (size_t i = 2; i < 1001; i++) {
		board[i] = i;
	}
	for (size_t i = 0; i < cnt; i++) {
		cin >> nums[i];
	}
	int m = *max_element(nums, nums + cnt);

	for (size_t i = 2; i <= m; i++) {
		for (size_t j = 2; j <= m; j++) {
			if (board[j]!=i && board[j]%i == 0) {
				board[j] = 0;
			}
		}
	}
	int result = 0;
	for (size_t i = 0; i < cnt; i++) {
		if (board[nums[i]]) {
			result++;
		}
	}
	cout << result;

	return 0;
}
