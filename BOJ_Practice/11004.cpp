// kth num
// cstdio scanf/printf : time limit exceed
// ios::sync_with_stdio(false);

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {

	ios::sync_with_stdio(false);
	int n;
	int k;
	cin >> n >> k;

	int arr[5000000];
	for (size_t i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	cout << arr[k - 1];

	return 0;
}
