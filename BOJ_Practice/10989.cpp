// sort num 3

#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {

	int n;
	scanf("%d", &n);
	// 개수대로 하면 메모리 터짐
	int arr[10001] = { 0 };

	int num;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num]++;	// 개수가 아니고 이 숫자가 몇개
	}

	for (size_t i = 1; i <= 10000; i++) {
		while (arr[i]--) {
			printf("%d\n", i);
		}
	}
	return 0;
}