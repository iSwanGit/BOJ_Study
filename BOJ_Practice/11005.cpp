// 진법변환2

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


int main(int argc, char* argv[]) {

	// A 65 << 10
	unsigned long long n;
	int b;
	cin >> n >> b;

	unsigned long long buf= n;
	vector<unsigned long long> result;
	while (buf >= b) {
		result.push_back(buf%b);
		buf = buf / b;
	}
	result.push_back(buf);

	for (auto i = result.rbegin(); i < result.rend(); i++) {
		if (*i>9) {
			printf("%c", (char)(*i + 55));
		}
		else {
			printf("%d", *i);
		}
	}

	
	return 0;
}
