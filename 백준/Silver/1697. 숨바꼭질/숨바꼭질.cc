#include <iostream>
#include <queue>
using namespace std;

int visited[200020];

void BFS(int n,int k) {
	int o, num;
	int d[2] = { -1,1 };
	queue<pair<int,int>> A;
	visited[n] = 1;
	A.push(make_pair(n,0));
	while (!A.empty()) {
		o = A.front().first;
		int t = A.front().second;
		A.pop();
		if (o == k) {
			cout << t;
			break;
		}
		for (int i = 0; i < 3; i++) {
			if (i == 2)
				num = o * 2;
			else
				num = o + d[i];
			if (num <= 200003 && !visited[num]) {
				visited[num] = 1;
				A.push(make_pair(num,t+1));
			}
		}
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	BFS(n, k);
}