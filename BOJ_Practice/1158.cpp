// Josephus permutation
#include <iostream>
#include <cstdio>
using namespace std;

struct mylist {
	int data;
	mylist* next= nullptr;
	mylist* prev = nullptr;
};

int main(int argc, char* argv[]) {

	int n, m;
	cin >> n >> m;

	mylist* l= new mylist();
	mylist* cur= l;
	for (size_t i = 0; i < n; i++) {
		cur->data = i + 1;
		cur->next = new mylist();	// leak 1 point
		cur->next->prev = cur;
		if (i == n - 1) {
			cur->next = l;
			l->prev = cur;
		}
		else cur = cur->next;
	}
	cur = l;
	printf("<");
	while (cur->next != cur->next->next) {
		for (int i = 0; i < m-1; i++) {
			cur = cur->next;
		}
		printf("%d, ", cur->data);
		cur->prev->next = cur->next;	// delete ignore
		cur->next->prev = cur->prev;
		cur = cur->next;
	}
	printf("%d>", cur->data);

	return 0;
}
