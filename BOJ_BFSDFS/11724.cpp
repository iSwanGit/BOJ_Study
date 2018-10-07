// connected component count
// used dfs

#include <iostream>
using namespace std;


int vmat[1001][1001] = {};
int vdfs[1001] = {};
int n, m;


void dfs(int a);
int main(int argc, char* argv[]) {
	cin >> n >> m;

	int x, y;
	for (size_t i = 1; i <= m; i++) {
		cin >> x >> y;
		vmat[x][y] = vmat[y][x]= 1;
	}

	int cnt = 0;
	for (size_t i = 1; i <= n; i++) {
		if (!vdfs[i]) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}

void dfs(int a) {
	vdfs[a] = 1;
	for (size_t i = 1; i <= n; i++) {
		if (!vdfs[i] && vmat[a][i]) {
			dfs(i);
		}
	}
}