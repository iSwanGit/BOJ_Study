// bfsdfs  basic

#include <iostream>
#include <queue>

using namespace std;

void dfs(int a);
void bfs(int a);

int n, m, v;	// node vertex start

int vmat[1001][1001] = {};
int vdfs[1001] = {};
int vbfs[1001] = {};
queue<int> que;

int main(int argc, char* argv[]) {
	cin >> n >> m >> v;


	int t1, t2;
	for (size_t i = 1; i <= m; i++) {
		cin >> t1 >> t2;
		vmat[t1][t2] = 1;
		vmat[t2][t1] = 1;
	}


	// dfs
	// recursive
	dfs(v);
	cout << "\n";
	bfs(v);
	// bfs


	return 0;
}


void dfs(int a) {
	vdfs[a] = 1;
	cout << a << ' ';
	for (size_t i = 1; i <= n; i++) {
		if (!vdfs[i] && vmat[a][i]) {
			dfs(i);
		}
	}
}

void bfs(int a) {
	vbfs[a] = 1;
	cout << a << ' ';
	for (size_t i = 1; i <= n; i++) {
		if (!vbfs[i] && vmat[a][i]) {
			vbfs[i] = 1;
			que.push(i);
		}
	}
	if (!que.empty()) {
		int tmp = que.front();
		que.pop();
		bfs(tmp);
	}
}