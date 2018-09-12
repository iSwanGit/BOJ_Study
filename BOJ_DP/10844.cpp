// easy stairways


#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char* argv[]) {

	int n;
	cin >> n;
	int dp[101][10];

	//dp[1] = 9;	// 9*1
	//dp[2] = 17;	// 12 23 ~ 89, 98~10 dp1-1 + dp1
	// dp[3]= 32
	// dp4= 61
	// 끝자리에 따라 결과가 다름!! >> 끝수별 분할

	dp[1][0] = 0;	// not starts 0
	for (int i = 1; i < 10; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		
		for (int j = 0; j < 10; j++) {
			// ~0
			if (j==0) {
				dp[i][j] = dp[i - 1][1] % 1000000000;
			}
			// ~9
			else if (j==9) {
				dp[i][j] = dp[i - 1][8] % 1000000000;
			}
			//
			else {
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
			}
		}
	}

	int res = 0;
	for (int i = 0; i < 10; i++) {
		res = (res+dp[n][i])%1000000000;
	}
	
	cout << res << endl;

	return 0;
}