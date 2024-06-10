#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int box[1001][1001];
int visited[1001][1001];
int cnt;
vector<pair<int, int>> one;

void BFS(int n, int m) {
	queue<tuple<int, int,int>> q;
	int dy[4] = { -1,1,0,0 };
	int dx[4] = { 0,0,-1,1 };
	int s = one.size();
	for (int k = 0; k < s; k++) {
		int i = one.back().first;
		int j = one.back().second;
		one.pop_back();
		visited[i][j] = 1;
		q.push(make_tuple(i, j, 1));
	}
	while (!q.empty()) {
		int y = get<0>(q.front());
		int x = get<1>(q.front());
		int t = get<2>(q.front());
		q.pop();
		for (int k = 0; k < 4; k++) {
			int ny = y + dy[k];
			int nx = x + dx[k];
			if (!((0 <= ny && ny < n) && (0 <= nx && nx < m)))
				continue;
			if (box[ny][nx] == 0 && !visited[ny][nx]) {
				visited[ny][nx] = 1;
				q.push(make_tuple(ny, nx,t+1));
				box[ny][nx] = 1;
				cnt = t;
			}
		}
	}
}

void tomato(int n, int m){
	if(one.size()>=1)
		BFS(n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (box[i][j] == 0) {
				cout << -1;
				return;
			}
		}
	}
	cout << cnt;
}

int main() {
	ios::sync_with_stdio(false);
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> box[i][j];
			if (box[i][j]==1)
				one.push_back(make_pair(i, j));
		}
	tomato(n, m);
}