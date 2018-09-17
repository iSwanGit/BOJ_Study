// 좌표sort

#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char* argv[]) {

	unsigned int n;
	scanf("%d", &n);
	pair<int, int> arr[100000];
	int x;
	int y;

	for (size_t i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		arr[i] = make_pair(x, y);
	}

	sort(arr, arr + n);

	for (size_t i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].first, arr[i].second);
	}

	return 0;
}