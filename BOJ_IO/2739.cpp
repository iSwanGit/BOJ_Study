// gugudan

#include <cstdio>

int main(int argc, char* argv[]) {

	int n;
	scanf_s("%d", &n);

	for (size_t i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n*i);
	}
	return 0;

}