// climbing up number

#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {

	int n;
	cin >> n;

	int dp[1001][10] = { 0 };
	
	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}
	// 0 1 2 3 4 5 6 7 8 9 
	// 00~09 11~19 22~29 33~39 ~~ 88~89 99 >> 10 9 8 7 6 5 4 3 2 1 = 55
	for (int i = 2; i <= n; i++) {
		// j: 맨 뒷자리 수
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] += dp[i - 1][k] % 10007;
			}
		}
	}
	//

	int res = 0;
	for (int i = 0; i < 10; i++) {
		res = (res + dp[n][i]) % 10007;
	}
	cout << res << endl;
	return 0;
}