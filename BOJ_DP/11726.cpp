// 2xn tile

#include <cstdio>
int main(int argc, char* argv[]) {

	int a;
	unsigned int table[1001] = { 0 };

	scanf("%d", &a);
	
	// starts 1 (didn't use 0)
	// small cases
	table[1] = 1;
	table[2] = 2;	// 직전께 꽉채워져서 옆에 세우는거 + 직전칸과 같이 해서 눕히는거. 
	table[3] = 3;
	// table[n]= table[n-1] + table[n-2]
	// table[4]= 5
	// table[5]= 8 (ex)
	
	for (int i = 4; i <= a; i++) {
		table[i] = (table[i - 1] + table[i - 2])%10007;
	}

	printf("%d", table[a]);

	return 0;
}