// Josephus 2
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {

	int n, m;
	cin >> n >> m;

	vector<int> l;
	int index = 0;
	for (size_t i = 0; i < n; i++) {
		l.push_back(i + 1);
	}
	int size = l.size();

	printf("<");
	while (size > 1) {
		//for (size_t i = 0; i < n; i++) {
			index = (index + m-1) % size--;
			printf("%d, ", l[index]);
			l.erase(l.begin() + index);
		//}
	}
	printf("%d>", l[0]);

	return 0;
}
