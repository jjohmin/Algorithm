#include <iostream>
#include <queue>
using namespace std;

int visited[200001];

void BFS(int n, int k) {
	queue<pair<int, int>> q;
	int d[3] = { 0, -1,1 }, num;
	q.push(make_pair(n, 0));
	visited[n] = 1;
	while (!q.empty()) {
		int m = q.front().first;
		int t = q.front().second;
		q.pop();
		if (m == k) {
			cout << t;
			break;
		}
		for (int i = 0; i < 3; i++) {
			if (i == 0) {
				num = m * 2;
				if (num >= 0 && num <= 100000 && !visited[num]) {
					visited[num] = 1;
					q.push(make_pair(num, t));
				}
			}
			else {
				num = m + d[i];
				if (num >=0 && num <= 100000 && !visited[num]) {
					visited[num] = 1;
					q.push(make_pair(num, t + 1));
				}
			}
		}
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	BFS(n, k);
}