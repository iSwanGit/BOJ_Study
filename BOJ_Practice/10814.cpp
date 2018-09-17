// sort by age

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char* argv[]) {

	int n;
	scanf_s("%d", &n);
	pair<int, int> arr[100000];
	int x;
	string name[100000];
	
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &x);
		cin >> name[i];
		arr[i] = make_pair(x, i);
	}

	sort(arr, arr + n);

	for (size_t i = 0; i < n; i++) { 
		printf("%d %s\n", arr[i].first, name[arr[i].second].c_str());
	}

	return 0;
}