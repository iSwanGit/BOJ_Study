// remaining

#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char* argv[]) {

	int a, b, c;
	cin >> a >> b >> c;

	printf("%d\n%d\n%d\n%d\n", (a + b) % c, (a%c + b % c) % c, (a*b) % c, (a%c*b%c) % c);


	return 0;
}