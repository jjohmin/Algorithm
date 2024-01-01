#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<int, int> edge;
static vector<vector<edge>> A;
static vector<bool> visited;
static vector<int> distanced;
void BFS(int node);

int main() {
	int N;
	cin >> N;
	A.resize(N + 1);
	for (int i = 1; i < N; i++) {
		int s, n, m;
		cin >> s >> n >> m;
		A[s].push_back(edge(n, m));
		A[n].push_back(edge(s, m));
	}
	visited = vector<bool>(N + 1, false);
	distanced = vector<int>(N + 1, 0);
	BFS(1);
	int MAX = 1;
	for (int i = 1; i <= N; i++) {
		if (distanced[MAX] < distanced[i])
			MAX = i;
	}
	fill(visited.begin(), visited.end(), false);
	fill(distanced.begin(), distanced.end(), 0);
	BFS(MAX);
	sort(distanced.begin(), distanced.end());
	cout << distanced[N] << endl;
}

void BFS(int node) {
	queue<int> myqueue;
	myqueue.push(node);
	visited[node] = true;
	while (!myqueue.empty()) {
		int now = myqueue.front();
		myqueue.pop();
		for (edge i : A[now]) {
			if (!visited[i.first]) {
				myqueue.push(i.first);
				visited[i.first] = true;
				distanced[i.first] = distanced[now] + i.second;
			}
		}
	}
}