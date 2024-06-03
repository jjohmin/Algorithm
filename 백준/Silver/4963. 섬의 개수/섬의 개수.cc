#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int jido[51][51];
int visited[51][51];
int cnt;

void BFS(int n,int m,int w, int h) {
	queue<pair<int, int>> q;
	int dy[8] = { -1,1,0,0,-1,-1,1,1 };
	int dx[8] = { 0,0,-1,1,-1,1,1,-1 };
	visited[n][m] = 1;
	q.push(make_pair(n, m));
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(!((0<=ny && ny<h)&&(0<=nx && nx <w)))
				continue;
			if (jido[ny][nx] == 1 && !visited[ny][nx]) {
				visited[ny][nx] = 1;
				q.push(make_pair(ny, nx));
			}
		}
	}
	cnt++;
}

void sum(int w, int h) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (!visited[i][j]) {
				if (jido[i][j] == 1)
					BFS(i, j,w,h);
				else
					visited[i][j] = 1;
			}
		}
	}
	cout << cnt << "\n";
}

int main() {
	int w, h;
	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> jido[i][j];
		cnt = 0;
		memset(visited, 0, sizeof(visited));
		sum(w, h);
	}
}