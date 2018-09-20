// same to pyfile
// time exceeded

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	string data;
	cin >> data;
	
	int cnt;
	cin >> cnt;
	int cur = data.length();

	string cmd;
	cin.ignore(INT_MAX, '\n');
	for (size_t i = 0; i < cnt; i++) {
		getline(cin, cmd);
		if (cmd[0] == 'L') {
			if (cur > 0) cur--;
		}
		else if (cmd[0] == 'D') {
			if (cur < data.length())
				cur++;
		}
		else if (cmd[0] == 'B') {
			if (cur > 0) {
				cur--;
				data.erase(data.begin() + cur);
			}
		}
		else if (cmd[0] == 'P') {	// P
			data.insert(cur, cmd.substr(2));
			cur++;
		}
	}
	cout << data;


	return 0;
}
