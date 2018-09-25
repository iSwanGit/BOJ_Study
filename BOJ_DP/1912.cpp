// sequencial sum

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {

	int n;
	cin >> n;

	int arr[100001] = {};
	int dp[100001] = {};

	for (size_t i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	dp[1] = arr[1];
	for (size_t i = 2; i <= n; i++) {
		if (arr[i] > dp[i-1]+arr[i]) {
			dp[i] = arr[i];
		}
		else {
			dp[i] = dp[i - 1] + arr[i];
		}
	}
	cout << *max_element(dp + 1, dp + n+1);

	return 0;
}
