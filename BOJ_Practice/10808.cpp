// alphabet

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	// ascii a = 97
	string word;
	cin >> word;

	int count[26] = {};
	
	for (size_t i = 0; i < word.length(); i++) {
		count[word[i] - 97]++;
	}

	for (size_t i = 0; i < 26; i++) {
		cout << count[i] << ' ';
	}

	return 0;
}
