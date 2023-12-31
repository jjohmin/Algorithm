#include <iostream>
#include <vector>
using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
static bool already = false;
void DFS(int num, int de);

int main() {
	int N, M;
	cin >> N >> M;
	A.resize(N);
	visited = vector<bool>(N, false);

	for (int i = 0; i < M; i++) {
		int n, m;
		cin >> n >> m;
		A[n].push_back(m);
		A[m].push_back(n);
	}

	for (int i = 0; i < N; i++) {
		DFS(i, 1);
		if (already) break;
	}
	if (already) cout << 1 << endl;
	else cout << 0 << endl;
}

void DFS(int num, int de) {
	if (de == 5 || already) {
		already = true;
		return;
	}
	visited[num] = true;
	for (int i : A[num]) {
		if (!visited[i])
			DFS(i, de + 1);
	}
	visited[num] = false;
}