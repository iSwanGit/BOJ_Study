// sticker


#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char* argv[]) {

	int cases;
	int n;
	int stk[2][100001];
	unsigned long long int dp[2][100001];

	cin >> cases;

	for (int i = 0; i < cases; i++) {
		cin >> n;
		for (int j = 0; j < 2; j++) {
			for (int k = 1; k <= n; k++) {
				cin >> stk[j][k];
			}
		}
		// 점수판 채워짐
		dp[0][0] = 0;
		dp[1][0] = 0;

		dp[0][1] = stk[0][1];
		dp[1][1] = stk[1][1];

		//////////////////////// hard point
		for (int i = 2; i <= n; i++) {
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + stk[0][i];	// 대각선, 대각선이 못쓰는위치라고 가정시 의 최댓값
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + stk[1][i];
		}
		cout << max(dp[0][n], dp[1][n]) << endl;

	}

	return 0;
}