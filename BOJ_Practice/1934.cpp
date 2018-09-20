// lcm
// similar to gcd

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {	// a>b
	if (a%b == 0) {
		return b;
	}
	else return gcd(b, a%b);
}

int main(int argc, char* argv[]) {

	int cnt;
	int a, b;

	cin >> cnt;
	for (size_t i = 0; i < cnt; i++) {
		cin >> a >> b;
		if (a == b) printf("%d\n", a);
		else {
			if (a < b) {
				swap(a, b);
			}
			int g = gcd(a, b);
			printf("%d\n", a*b/g);
		}
	}

	

	return 0;
}
