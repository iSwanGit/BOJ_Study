// gcd sum

#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {	// a>b
	if (a < b) swap(a, b); 
	if (a%b == 0) {
		return b;
	}
	else return gcd(b, a%b);
	// also available : for
}

int main(int argc, char* argv[]) {
	
	int t;
	int n;
	int ns[100001] = {};
	long long result;

	cin >> t;
	for (size_t i = 0; i < t; i++) {
		result = 0;
		cin >> n;
		for (size_t j = 0; j < n; j++) {
			cin >> ns[j];
		}
		for (size_t j = 0; j < n-1; j++) {
			for (size_t k = j+1; k < n; k++) {
				result += gcd(ns[j], ns[k]);
			}
		}
		cout << result << endl;
	}
	
	return 0;
}
