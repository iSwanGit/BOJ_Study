// sum of numbers

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

	int n;
	string s;
	int sum= 0;
	//cout << cin.get() - 48;

	cin >> n >> s;
	for (size_t i = 0; i < n; i++) {
		sum += (s[i] - 48);
	}
	cout << sum;
	return 0;

}