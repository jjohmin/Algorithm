#include <iostream>
using namespace std;

int n, m;
int arr[9];
int visited[9];


void bac(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			visited[i] = 1;
			arr[cnt] = i + 1;
			bac(cnt+1);
			visited[i] = 0;
		}
	}
}

int main() {
	cin >> n >> m;
	bac(0);
}