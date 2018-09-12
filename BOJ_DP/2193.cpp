// pinary number


#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {

	int n;
	cin >> n;

	unsigned long long int dp[100][2] = { 0 };
	
	dp[1][0] = 0;
	dp[1][1] = 1;
	
	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
		dp[i][1] = dp[i - 1][0];
	}
	// 1
	// 10
	// 100 101
	// 1000 1001 1010 
	// 10000 10001 10010 10100 10101
	unsigned long long res = 0;
	for (int i = 0; i < 2; i++) {
		res += dp[n][i];
	}
	cout << res << endl;
	return 0;
}