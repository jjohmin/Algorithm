#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void dfs(int start, vector<int>A[], bool visited[]) {
	visited[start] = true;
	printf("%d ", start);

	for (int i = 0; i < A[start].size(); i++)
	{
		int next = A[start][i];
		if (!visited[next])
			dfs(next, A, visited);
	}
}

void bfs(int start, vector<int>A[], bool visited[]) {
	queue<int> Q;
	Q.push(start);
	visited[start] = true;
	while (!Q.empty()) {
		int m = Q.front();
		Q.pop();
		cout << m << " ";
		for (int i = 0; i < A[m].size(); i++) {
			int n = A[m][i];
			if (!visited[n]) {
				Q.push(n);
				visited[n] = true;
			}
		}
	}
}

int main() {
	int n, m, v;
	int a, b;
	cin >> n >> m >> v;
	vector<int> *A = new vector<int>[n+1];
	bool visited[1001];
	fill(visited, visited + n + 1, false);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
		sort(A[i].begin(), A[i].end());
	dfs(v, A, visited);
	cout << "\n";
	fill(visited, visited + n + 1, false);
	bfs(v,A,visited);
}