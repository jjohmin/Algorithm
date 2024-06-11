#include <iostream>
#include <queue>
using namespace std;

int path[101][101];
int visited[101][101];
int cnt;

void BFS(int n, int m, int i, int j) {
	queue<pair<int,int>> q;
	int dy[4] = { -1,1,0,0 };
	int dx[4] = { 0,0,-1,1 };
	int count = 1;
	q.push(make_pair(i, j));
	visited[i][j] = 1;
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int ny = y + dy[k];
			int nx = x + dx[k];
			if (0 <= ny && ny <= n && 0 <= nx && nx <= m) {
				if (path[ny][nx] && !visited[ny][nx]) {
					visited[ny][nx] = 1;
					q.push(make_pair(ny, nx));
					count++;
				}
			}
		}
	}
	cnt = cnt > count ? cnt : count;
}

void waste(int n,int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (path[i][j] && !visited[i][j])
				BFS(n, m, i, j);
	cout << cnt;
}

int main() {
	ios::sync_with_stdio(false);
	int n, m, k,r,c;
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++) {
		cin >> r >> c;
		path[r-1][c-1] = 1;
	}
	waste(n, m);
}