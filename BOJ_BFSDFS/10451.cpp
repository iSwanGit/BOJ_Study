// Permutation Cycle
// ref. need to retry

#include<iostream>
using namespace std;

int vdfs[1010] = {};
int vmat[1010] = {};


int cnt = 0;

void dfs(int d) {
	if (!vdfs[d]) {
		vdfs[d] = 1;
		dfs(vmat[d]);
	}
}


int main(int argc, char* argv[]) {


	int T, N;
	cin >> T;

	for (T; T > 0; T--) {
		cnt = 0;
		cin >> N;

		int next;

		for (int i = 1; i <= N; i++) {
			cin >> next;
			vmat[i] = next;
		}

		for (int j = 1; j <= N; j++) {
			if (!vdfs[j]) {
				dfs(j);
				cnt++;
			}
		}

		cout << cnt << "\n";

		for (int j = 1; j <= N; j++) {
			vmat[j] = 0;
			vdfs[j] = 0;
		}

	}
	return 0;
}