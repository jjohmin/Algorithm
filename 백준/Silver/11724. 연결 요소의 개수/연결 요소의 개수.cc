#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> arr[1001];
int visited[1001];
int cnt;

void BFS(int n,int i) {
	queue<int> q;
	visited[i] = 1;
	q.push(i);
	while (!q.empty()) {
		int m = q.front();
		q.pop();
		for (int j = 0; j < arr[m].size(); j++) {
			int k = arr[m][j];
			if (!visited[k]) {
				visited[k] = 1;
				q.push(k);
			}
		}
	}
	cnt++;
}

void connect(int n) {
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			BFS(n,i);
		}
	}
}

int main() {
	int n, m;
	int u, v;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	connect(n);
	cout << cnt;
}