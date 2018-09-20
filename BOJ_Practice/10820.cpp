// 문자열 분석

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	// (space) = 32
	// '0' = 48
	// ascii a = 97
	// A = 65
	
	
	string word[101];
	int big, small, num, space;
	int i= 0;
	while(getline(cin, word[i])) {
		big = 0; small = 0; num = 0; space = 0;
		for (size_t j = 0; j < word[i].length(); j++) {
			if (word[i][j] >= 'a' && word[i][j] <= 'z') small++;
			else if (word[i][j] >= 'A' && word[i][j] <= 'Z') big++;
			else if (word[i][j] >= '0' && word[i][j] <= '9') num++;
			else if (word[i][j] == ' ') space++;
		}
		printf("%d %d %d %d\n", small, big, num, space);
		i++;
	}

	return 0;
}
