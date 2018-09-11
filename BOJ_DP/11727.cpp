// 2xn 2

#include <cstdio>
int main(int argc, char* argv[]) {

	int a;
	unsigned int table[1001] = { 0 };

	scanf("%d", &a);
	
	// starts 1 (didn't use 0)
	// small cases
	table[1] = 1;
	table[2] = 3;	// 직전께 꽉채워져서 옆에 세우는거 + 직전칸과 같이 해서 눕히는거/2x2큰거
	table[3] = 5;
	// table[n]= table[n-1] + table[n-2]*2
	// table[4]= 11
	
	for (int i = 4; i <= a; i++) {
		table[i] = (table[i - 1] + table[i - 2]*2)%10007;
	}

	printf("%d", table[a]);

	return 0;
}