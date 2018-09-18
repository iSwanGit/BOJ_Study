// 국영수

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student {
	char n[11];
	int k;
	int e;
	int m;
};

bool scmp(Student s1, Student s2) {
	// k_desc, e_asc, m_desc, n_asc
	if (s1.k == s2.k) {
		if (s1.e == s2.e) {
			if (s1.m == s2.m) {
				// n_asc
				return strcmp(s1.n, s2.n) < 0;
			}
			// m_desc
			else return s1.m > s2.m;
		}
		// e_Asc
		else return s1.e < s2.e;
	}
	// k_desc
	else return s1.k > s2.k;
}

int main(int argc, char* argv[]) {

	int c;
	scanf("%d", &c);
	Student stu[100000];


	for (int i = 0; i < c; i++) {
		scanf("%s %d %d %d", &stu[i].n, &stu[i].k, &stu[i].e, &stu[i].m);
	}

	sort(stu, stu + c, scmp);
	
	
	for (size_t i = 0; i < c; i++) {
		printf("%s\n", stu[i].n);
	}

	return 0;
}