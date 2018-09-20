// four numbers

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	string s[4];
	for (size_t i = 0; i < 4; i++) {
		cin >> s[i];
	}
	// AB
	unsigned long long first = stoull(s[0] + s[1]);
	unsigned long long last = stoull(s[2] + s[3]);

	cout << first + last;
	return 0;
}
