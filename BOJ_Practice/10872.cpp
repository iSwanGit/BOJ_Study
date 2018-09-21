// factorial

#include <cstdio>

int main(int argc, char* argv[]) {

	int n;
	
	scanf("%d", &n);
	if (n == 0) {
		printf("1");
	}
	else {
		int res = n;
		while (--n) {
			res *= n;
		}
		printf("%d", res);

	}
	return 0;
}
