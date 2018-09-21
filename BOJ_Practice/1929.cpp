// find prime nums

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {

	int m, n;
	cin >> m >> n;

	int board[1000001] = {};
	for (size_t i = 2; i < 1000001; i++) {
		board[i] = i;
	}
	for (size_t i = 2; i <= n; i++) {
		if (board[i] == 0)  continue;
		for (size_t j = i + i; j <= n; j += i) {
			board[j] = 0;
		}
	}
	for (size_t i = m; i <= n; i++) {
		if (board[i]) {
			printf("%d\n", i);
		}
	}

	return 0;
}