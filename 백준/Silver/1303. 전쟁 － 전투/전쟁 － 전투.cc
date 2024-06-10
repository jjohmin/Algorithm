#include <iostream>
#include <queue>
using namespace std;

string fight[101];
int visited[101][101];
int white, blue;


void BFS(int i, int j, int n, int m) {
	queue<pair<int, int>> q;
	int cnt = 1;
	int dy[4] = { -1,1,0,0 };
	int dx[4] = { 0,0,-1,1 };
	q.push(make_pair(i, j));
	visited[i][j] = 1;
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int ny = y + dy[k];
			int nx = x + dx[k];
			if (0 <= ny && ny < m && 0 <= nx && nx < n) {
				if (!visited[ny][nx] && fight[ny][nx] == fight[i][j]) {
					visited[ny][nx] = 1;
					cnt++;
					q.push(make_pair(ny, nx));
				}
			}
		}
	}
	if (fight[i][j] == 'W')
		white += cnt * cnt;
	else
		blue += cnt * cnt;
}

void power(int n, int m) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (visited[i][j] == 0)
				BFS(i, j, n, m);
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> fight[i];
	power(n, m);
	cout << white << " " << blue;
}