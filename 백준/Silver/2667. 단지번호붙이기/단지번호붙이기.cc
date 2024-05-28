#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int d=0;
char map[26][26];
int visited[26][26];
int result[10000];

void bfs(int i, int j, int n) {
	int cnt = 0;
	visited[i][j] = 1;
	queue<pair<int, int>> q;
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	q.push(make_pair(i, j));
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (!((0 <= ny && ny <= n) && (0 <= nx && nx <= n)))
				continue;
			if (map[ny][nx] == '1' && visited[ny][nx] == 0) {
				cnt++;
				visited[ny][nx] = 1;
				q.push(make_pair(ny, nx));
			}
		}
	}
	result[d++]=cnt+1;
}

void danji(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				if (map[i][j]=='1')
					bfs(i,j,n);
				else
					visited[i][j] = 1;
			}
		}
	}
	sort(result, result + 10000);
}

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;	
	for (int i = 0; i < n; i++)
		cin >> map[i];
	danji(n);
	cout << d << "\n";
	for (int i = 0; i < 10000; i++) {
		if(result[i]>=1)
			cout << result[i] << "\n";
	}
}