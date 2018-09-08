// A+B -7
#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {

	int cases;
	int a;
	int b;

	scanf_s("%d", &cases);  // scanf
	for (size_t i = 0; i < cases; i++) {
		scanf_s("%d %d", &a, &b);       // scanf
		printf("Case #%d: %d\n", i+1, a + b);
	}
	return 0;
}