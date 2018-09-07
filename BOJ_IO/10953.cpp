// A+B -6
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int cases;
	string line;
	cin >> cases;
	for (size_t i = 0; i < cases; i++) {
		cin >> line;
		const char* a = line.c_str();
		cout << atoi(a + 0) + atoi(a + 2) << endl;	// 0<a, b<10
	}
	return 0;
}