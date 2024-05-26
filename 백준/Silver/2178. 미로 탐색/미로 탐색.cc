#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int visited[101][101];
int check[101][101];
char map[101][101];

void BFS(int n, int m) {
	visited[0][0] = 1;
	queue<pair<int,int>> d;
	d.push(make_pair(0,0));
	int dy[4] = { -1,1,0,0 };
	int dx[4] = { 0,0,-1,1 };
	while (!d.empty()) {
		int y = d.front().first;
		int x = d.front().second;
		d.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(!( (0<=nx && nx<m) && (0<=ny && ny<n)))
				continue;
			if (map[ny][nx] == '1' && visited[ny][nx] == 0) {
				check[ny][nx] = check[y][x] + 1;
				visited[ny][nx] = 1;
				d.push(make_pair(ny,nx));
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
			cin >> map[i];
	BFS(n, m);
	cout << check[n-1][m-1]+1;
}