// wine
// wrong

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char* argv[]) {

	int n;
	int wine[10001];
	int maxwine[10001];
	cin >> n;
	for (size_t i = 1; i <= n; i++) {
		cin >> wine[i];
	}

	maxwine[1] = wine[1];
	maxwine[2] = wine[1] + wine[2];
	maxwine[3] = max(max(maxwine[2], maxwine[1] + wine[3]), wine[2] + wine[3]);

	for (size_t i = 4; i <= n; i++) {
		// n-4	n-3	n-2	n-1	n
		// A	B	C	D	E
		// ~B D +E
		// ~ CD +E
		// ~BC  +E
		// ~ C  +E
		// bc e
		// b de
		// 2: ab
		// 3: ab a c bc 2, 1+c, 0+b+c
		
		maxwine[i] = max(maxwine[i - 3]+wine[i-1]+wine[i], maxwine[i - 2]+ wine[i]);
	}

	cout << maxwine[n];


	return 0;
}