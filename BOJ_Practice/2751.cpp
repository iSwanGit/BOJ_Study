// sort 2

#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char* argv[]) {
		
	unsigned int n;
	scanf("%d", &n);
	int arr[1000000];

	for (size_t i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr+n);
	
	for (size_t i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}