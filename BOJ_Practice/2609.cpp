// gcd
// 유클리드호제법

#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {	// a>b
	if (a%b == 0) {
		return b;
	}
	else return gcd(b, a%b);
}

int main(int argc, char* argv[]) {

	int a, b;
	cin >> a >> b;

	if (a == b) cout << a << endl << a;
	else {
		if (a < b) {
			swap(a, b);
		}
		int g = gcd(a, b);
		cout << g << endl << a * b / g;
	}
	

	return 0;
}
