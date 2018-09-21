// 진법변환

#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;


int main(int argc, char* argv[]) {

	// A 65 << 10
	// 9 57
	string n;
	int b;
	cin >> n >> b;

	unsigned long long result= 0;
	size_t len = n.length();
	
	for (size_t i = 0; i < len; i++) {
		if (n[i] >= 65) {
			result += (n[i] - 55)*pow(b, len - i - 1);
		}
		else {
			result += (n[i] - 48)*pow(b, len - i - 1);
		}
	}

	cout << result;
	
	return 0;
}
