#include <iostream>
#include <queue>
#include <algorithm>
#include <string.h>
using namespace std;

int jido[9][9];
int jido_copy[9][9];
int visited[9][9];
int n, m;
int ma = -1;

void BFS() {
	int count = 0;
	copy(&jido[0][0], &jido[0][0] + 81, &jido_copy[0][0]);
	memset(visited, 0, sizeof(visited));
	queue<pair<int, int>> q;
	int dy[4] = { -1, 1, 0, 0 };
	int dx[4] = { 0, 0, -1, 1 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (jido_copy[i][j] == 2) {
				q.push(make_pair(i, j));
				visited[i][j] = 1;
			}
		}
	}
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (0 <= ny && ny < n && 0 <= nx && nx < m) {
				if (visited[ny][nx] == 0 && jido_copy[ny][nx] == 0) {
					visited[ny][nx] = 1;
					q.push(make_pair(ny, nx));
					jido_copy[ny][nx] = 2;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (jido_copy[i][j] == 0)
				count++;
		}
	}
	if (ma < count)
		ma = count;
}

void virus(int cnt) {
	if (cnt == 3) {
		BFS();
		return;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (jido[i][j] == 0) {
				jido[i][j] = 1;
				virus(cnt + 1);
				jido[i][j] = 0;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int cnt=0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> jido[i][j];
	virus(0);
	cout << ma;
}