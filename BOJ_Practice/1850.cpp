// gcd

#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) {	// a>b
	if (a%b == 0) {
		return b;
	}
	else return gcd(b, a%b);
	// also available : for
}

int main(int argc, char* argv[]) {
	unsigned long long a, b;
	cin >> a >> b;
	if (a < b) swap(a, b);
	for (size_t i = 0; i < gcd(a, b); i++) {
		cout << 1;
	}
	return 0;
}
