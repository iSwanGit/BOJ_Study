// 1 split per 10 words

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	string s;
	cin >> s;
	int full = s.length() / 10;
	int left = s.length() % 10;

	for (size_t i = 0; i < full; i++) {
		cout << s.substr(10 * i, 10) << endl;
	}
	cout << s.substr(10 * full, left) << endl;

	return 0;

}