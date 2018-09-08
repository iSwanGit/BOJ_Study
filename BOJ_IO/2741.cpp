// print N
// 소요시간 절약 C사용

#include <cstdio>

int main(int argc, char* argv[]) {

	int n;
	scanf_s("%d", &n);

	for (size_t i = 0; i < n; i++) {
		printf("%d\n", i + 1);
	}
	return 0;

}