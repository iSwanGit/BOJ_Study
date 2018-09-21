#include <iostream>
#include <cstdio>
using namespace std;

#define size 1000000
int main(int argc, char* argv[]) {

	int n;

	int board[size+1] = {};
	for (size_t i = 2; i < size+1; i++) {
		board[i] = i;
	}
	for (size_t i = 2; i <= size; i++) {
		if (board[i] == 0)  continue;
		for (size_t j = i + i; j <= size; j += i) {
			board[j] = 0;
		}
	}

	while (true) {
		scanf("%d", &n);
		if (n == 0) break;
		
		bool exist = false;
		for (size_t i = 3; i <= n / 2; i+=2) {
			if (board[i] && board[n - i]) {
				printf("%d = %d + %d\n", n, i, n - i);
				exist = true;
				break;
			}
		}

		if (!exist) {
			printf("Goldbach's conjecture is wrong.\n");
		}
	}

	return 0;
}
