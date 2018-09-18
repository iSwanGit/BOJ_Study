// 괄호

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {

	int n;
	cin >> n;

	int x = 0;
	int y = 0;
	string cmd;
	for (size_t i = 0; i < n; i++) {
		cin >> cmd;
		for (size_t j = 0; j < cmd.length(); j++) {
			if (cmd[j] == '(') {
				x++;
			}
			else if (cmd[j] == ')') {
				y++;
				if (x < y) {
					//cout << "NO" << endl;
					break;
				}
			}
			if (x == y) {
				x = 0;
				y = 0;
			}
		}
		if (x+y == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
		x = 0;
		y = 0;
	}


	return 0;
}
