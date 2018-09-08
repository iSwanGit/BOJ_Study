// 2007

#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {

	char day[7][4] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int m;
	int d;

	unsigned int temp = 0;
	cin >> m >> d;
	for (size_t i = 0; i < m-1; i++) {
		temp += days[i];
	}
	temp += d - 1;
	cout << day[temp % 7];
	return 0;

}