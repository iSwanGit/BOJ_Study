// sort numbers 2
// 왜 시간초과 나는지 모르겠음

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {

	unsigned int cases;
	//int slot[1000010];
	
	cin >> cases;
	int* slot = new int[cases];

	for (size_t i = 0; i < cases; i++) {
		cin >> slot[i];
	}
	sort(slot, slot + cases);
	for (size_t i = 0; i < cases; i++) {
		cout << slot[i] << endl;
	}

	return 0;
}