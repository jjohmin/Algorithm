#include <iostream>
using namespace std;

int n, m;
int arr[10];
int vis[10];
int cnt;

void bac(int e) {
	if (e == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		bool can = true;
		if (can) {
			vis[i] = 1;
			arr[e] = i + 1;
			bac(e + 1);
			vis[i] = 0;
		}
	}
}

int main() {
	cin >> n >> m;
	bac(0);
}