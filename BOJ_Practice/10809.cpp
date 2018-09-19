// find alphabet

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	// ascii a = 97
	string word;
	cin >> word;

	int pos[26];
	for (size_t i = 0; i < 26; i++) {
		pos[i] = -1;
	}
	
	for (size_t i = 0; i < word.length(); i++) {
		if (pos[word[i] - 97] < 0) {
			pos[word[i] - 97] = i;
		}
	}

	for (size_t i = 0; i < 26; i++) {
		cout << pos[i] << ' ';
	}

	return 0;
}
