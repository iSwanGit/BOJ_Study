// bin->oct
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

void Firstcode();

int main(int argc, char* argv[]) {

	// 0 48 1 49
	string bin;
	cin >> bin;
	
	string sbuf;
	int ibuf= 0;
	int first = bin.length() % 3;
	sbuf = bin.substr(0, first);
	for (size_t i = 0; i < first; i++) {
		ibuf += (sbuf[i] * pow(2, first - i - 1) - '0'*(first-1));
	}
	if (ibuf) cout << (char)ibuf;

	for (size_t i = first; i < bin.length(); i+=3) {
		cout << (char)(bin[i] * 4 + bin[i + 1] * 2 + bin[i + 2] - '0' * 6);
	}

	
	return 0;
}

void Firstcode() {

	string bin;
	cin >> bin;
	string sbuf;
	int cur = 0;
	int ibuf = 0;

	int first = bin.length() % 3;
	int next = bin.length() / 3;
	if (first) {
		cur = first;
		sbuf = bin.substr(0, first);
		for (size_t i = 0; i < first; i++) {
			ibuf += (sbuf[i] - 48)*pow(2, first - i - 1);
		}
		cout << ibuf;
	}
	while (next--) {
		ibuf = 0;
		sbuf = bin.substr(cur, 3);
		for (size_t i = 0; i < 3; i++) {
			ibuf += (sbuf[i] - 48)*pow(2, 2 - i);
		}
		cout << ibuf;
		cur += 3;
	}
}