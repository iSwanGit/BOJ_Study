// 1212 oct->bin

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, char* argv[]) {



	// A 65 << 10
	// 0 48
	string n;
	cin >> n;

	string res;
	for (size_t i = 0; i < n.length(); i++) {
		res.push_back((n[i]-48) / 4 + 48);
		res.push_back((n[i] - 48) % 4 / 2 + 48);
		res.push_back((n[i] - 48) % 4 % 2 + 48);
	}
	for (auto i = res.begin(); i < res.end()-1;) {
		if (*i == '0') {
			res.erase(i);
			continue;
		}
		else break;
	}
	cout << res;

	return 0;
}
