// A+B -4

#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;

	while (true) {
		cin >> a;
		if (!cin.good()) {
			break;
		}
		cin >> b;
		cout << a + b << endl;
		cin.clear();
	}
	return 0;
}

