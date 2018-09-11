// make to 1
// 접근법고민 후 상원코드 참고후 코딩

#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char* argv[]) {

	int a;
	int* table = new int[1000001];

	scanf_s("%d", &a);
	
	// starts 1 (didn't use 0)
	// small cases
	table[1] = 0;
	table[2] = 1;
	table[3] = 1;

	for (int i = 4; i <= a; i++) {
		if (i%3==0 && i%2 == 0) {	////// point
			table[i] = min(min(table[i / 3], table[i / 2]), table[i-1]) +1;	// smaller case + this calc(+1)
		}
		else if (i%3 == 0) {
			table[i] = min(table[i / 3], table[i - 1]) + 1;
		}
		else if (i%2 == 0) {
			table[i] = min(table[i / 2], table[i - 1]) + 1;
		}
		else {
			table[i] = table[i - 1] + 1;
		}
	}

	printf("%d", table[a]);

	return 0;
}