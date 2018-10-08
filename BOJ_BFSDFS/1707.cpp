// bipartite Graph (틀림)
#include <iostream>
using namespace std;


int vmat[20001][20001] = {};
int vdfs[20001] = {};
int dfscolor[20001] = {};	// R 0 B 1
int n,m;

void init() {
	for (int i = 0; i < 20001; i++) {
		for (size_t j = 0; j < 20001; j++) {
			vmat[i][j] = 0;
		}
	}
}

int dfs(int a, int c);

size_t i = 0;
int main(int argc, char* argv[]) {
	
	int t;
	cin >> t;
	
	for (size_t ti = 0; ti < t; ti++) {
		cin >> n >> m;

		int x, y;
		init();
		for (size_t j = 1; j <= m; j++) {
			cin >> x >> y;
			vmat[x][y] = vmat[y][x] = 1;
		}
		if (dfs(1, 0)) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

	}
	

	return 0;
}

int dfs(int a, int c) {
	vdfs[a] = 1;
	dfscolor[a] = c;
	for (size_t i = 1; i <= n; i++) {
		if (vmat[a][i]) {
			if (vdfs[i] && (dfscolor[a] == dfscolor[i])) {
				return 0;
			}
			else if (!vdfs[i]) {
				return dfs(i, !c);
			}
		}
	}
}