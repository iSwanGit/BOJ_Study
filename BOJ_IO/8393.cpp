//  SUM

#include <cstdio>

int main(int argc, char* argv[]) {

	int n;
	scanf("%d", &n);
	n++;
	int sum = 0;

	for (int i = 1; i < n; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;

}