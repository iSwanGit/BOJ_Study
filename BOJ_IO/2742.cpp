// print N descending

#include <cstdio>

int main(int argc, char* argv[]) {

	int n;
	scanf_s("%d", &n);

	for (size_t i = 0; i < n; i++) {
		printf("%d\n", n-i);
	}
	return 0;

}