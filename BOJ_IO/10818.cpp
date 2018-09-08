// min max

#include <cstdio>
int main(int argc, char* argv[]) {

	int n;
	scanf("%d", &n);
	
	int* arr = new int[n];
	for (size_t i = 0; i < n; i++) {
		scanf("%d",arr+i);
	}
	int max = arr[0];
	int min= arr[0];
	for (size_t i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	printf("%d %d", min, max);

	return 0;

}