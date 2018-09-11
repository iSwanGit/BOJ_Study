// plus 1, 2, 3


#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {

	int count;
	int table[12] = { 0 };
	// didn't use index 0

	table[1] = 1;
	table[2] = 2;	// 1+1, 2
	table[3] = 4;	// 1+1+1, 1+2, 2+1, 3

	// table[4]= 7; 1111 112 121 13 211 22 31
	// table[5]= 13; 11111 1112 1121 113 1211 122 131 2111 212 221 23 311 32

	for (int i = 4; i <= 11; i++) {
		table[i] = table[i - 1] + table[i - 2] + table[i-3];
	}
	

	cin >> count;
	int* n = new int[count];
	for (size_t i = 0; i < count; i++) {
		cin >> n[i];
	}

	for (size_t i = 0; i < count; i++) {
		cout << table[n[i]] << endl;
	}

	return 0;
}