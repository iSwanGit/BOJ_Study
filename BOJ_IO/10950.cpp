// A+B -3

#include <iostream>
using namespace std;
int main()
{
	int cases;
	int a;
	int b;

	cin >> cases;
	for (size_t i = 0; i < cases; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}