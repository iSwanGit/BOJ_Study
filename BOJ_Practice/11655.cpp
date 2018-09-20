// ROT13

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	// (space) = 32
	// '0' = 48
	// ascii a = 97
	// A = 65
	
	
	string S;
	getline(cin, S);
	for (auto i : S) {
		if (toupper(i)>='N' && toupper(i) <= 'Z') {
			cout << (char)(i - 13);
		}
		else if (toupper(i) >= 'A' && toupper(i) < 'N') {
			cout << (char)(i + 13);
		}
		else cout << i;
	}

	return 0;
}
