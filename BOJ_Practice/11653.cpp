// 소인수분해
// 소수를 굳이 구할 필요 없다! 1차시도때 간신히 시간 통과하던데

#include <iostream>
#include <cstdio>
using namespace std;

#define size 10000000
int main(int argc, char* argv[]) {

	int n;

	scanf("%d", &n);
	while (n>1) {
		for (size_t i = 2; i <= n; i++) {
			if (n%i == 0) {
				printf("%d\n", i);
				n /= i;
				break;
			}
		}
	}

	return 0;
}
