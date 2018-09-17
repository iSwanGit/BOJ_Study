//좌표정렬2

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
		arr[i] = make_pair(y, x);
	}

	sort(arr, arr + n);

	for (size_t i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].second, arr[i].first);
	}

	return 0;
}