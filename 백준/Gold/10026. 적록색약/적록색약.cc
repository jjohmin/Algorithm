#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

string  picture[101];
int visited[101][101];
int cnt;

void BFS(int n, int i, int j,int l) {
	queue<pair<int, int>> q;
	char c = picture[i][j];
	int dy[4] = { -1, 1, 0, 0 };
	int dx[4] = { 0, 0, -1, 1 };
	q.push(make_pair(i, j));
	visited[i][j] = 1;
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int ny = y + dy[k];
			int nx = x + dx[k];
			if (0 <= ny && ny < n && 0 <= nx && nx < n) {
				if (l == 1 && (c == 'R' || c == 'G')) {
					if (visited[ny][nx]==0 && (picture[ny][nx] == 'R' || picture[ny][nx] == 'G')) {
						q.push(make_pair(ny, nx));
						visited[ny][nx] = 1;
					}
				}
				else {
					if (visited[ny][nx] == 0 && picture[ny][nx] == c) {
						q.push(make_pair(ny, nx));
						visited[ny][nx] = 1;
					}
				}
			}
		}
	}
	cnt++;
}

void jakrok(int n) {
	for (int l = 0; l < 2; l++) {
		cnt = 0;
		memset(visited, 0, sizeof(visited));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (visited[i][j] == 0)
					BFS(n, i, j, l);
		cout << cnt << " ";
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> picture[i];
	jakrok(n);
}