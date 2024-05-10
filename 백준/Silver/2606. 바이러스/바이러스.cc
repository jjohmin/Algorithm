#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int Virus(int start, vector<int> A[], bool visited[]) {
	int cnt = 0;
	queue<int> Q;
	Q.push(start);
	visited[start] = true;
	while (!Q.empty()) {
		int n = Q.front();
		Q.pop();
		cnt++;
		for (int i = 0; i < A[n].size(); i++) {
			int m = A[n][i];
			if (!visited[m]) {
				Q.push(m);
				visited[m] = true;
			}
		}
	}
	return cnt-1;
}

int main() {
	ios::sync_with_stdio(false);
	int c, n;
	int a, b;
	cin >> c >> n;
	vector<int> A[101];
	bool visited[101];
	fill(visited, visited + c + 1 , false);
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	cout << Virus(1, A, visited);
}