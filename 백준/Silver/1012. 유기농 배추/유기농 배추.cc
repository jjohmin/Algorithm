#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int farm[51][51];
int visited[51][51];
int cnt;

void BFS(int i, int j, int m, int n) {
	queue<pair<int, int>> q;
	visited[i][j] = 1;
	q.push(make_pair(i, j));
	int dy[4] = { -1,1,0,0 };
	int dx[4] = { 0,0,-1,1 };
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int ny = y + dy[k];
			int nx = x + dx[k];
			if (!((0 <= ny && ny <= n) && (0 <= nx && nx <= m)))
				continue;
			if (farm[ny][nx] == 1 && visited[ny][nx] == 0) {
				visited[ny][nx] = 1;
				q.push(make_pair(ny, nx));
			}
		}
	}
	cnt++;
}

void worm(int m, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j]) {
				if (farm[i][j])
					BFS(i,j,m, n);
				else
					visited[i][j] = 1;
			}
		}
	}
	cout << cnt << "\n";
}

int main() {
	int t, m, n, k;
	int x, y;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m >> n >> k;
		memset(farm, 0, sizeof(farm));
		memset(visited, 0, sizeof(visited));
		cnt = 0;
		for (int j = 0; j < k; j++) {
			cin >> x >> y;
			farm[y][x] = 1;
		}
		worm(m, n);
	}
}