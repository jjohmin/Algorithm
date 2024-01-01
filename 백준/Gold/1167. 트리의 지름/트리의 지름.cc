#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<int, int> edge;                  // 봄
static vector<vector<edge>> A;                // 봄
static vector<bool> visited;
static vector<int> distanced;                 // 봄
void BFS(int node);

int main() {
	int N;
	cin >> N;
	A.resize(N + 1);

	for (int i = 0; i < N; i++) {
		int s, n, m;
		cin >> s;
		while (true) {
			cin >> n;
			if (n == -1) break;
			cin >> m;
			A[s].push_back(edge(n,m));         // 봄
		}
	}

	distanced = vector<int>(N + 1, 0);         // 봄
	visited = vector<bool>(N + 1, false);      // 봄

	BFS(1);
	int MAX = 1;
	for (int i = 1; i <= N; i++) {
		if (distanced[MAX] < distanced[i])
			MAX = i;
	}
	fill(distanced.begin(), distanced.end(), 0);
	fill(visited.begin(), visited.end(), false);

	BFS(MAX);
	sort(distanced.begin(), distanced.end());
	cout << distanced[N] << endl;
}

void BFS(int node) {
	queue<int> myqueue;
	myqueue.push(node);
	visited[node] = true;
	while (!myqueue.empty()) {                    // 봄
		int num = myqueue.front();
		myqueue.pop();
		for (edge i : A[num]) {                   // 봄
			if (!visited[i.first]) {
				visited[i.first] = true;          // 봄
				myqueue.push(i.first);            // 봄
				distanced[i.first] = distanced[num] + i.second;    // 봄
			}
		}
	}
}