#include <iostream>
using namespace std;

int n, m;
int arr[9];
int vis[9];

void bac(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		bool can = true;
		for (int j = cnt - 1; j >= 0; j--)
			if (arr[j] > i + 1)
				can = false;
		if (!vis[i] && can) {
			vis[i] = 1;
			arr[cnt] = i + 1;
			bac(cnt + 1);
			vis[i] = 0;
		}
	}
}

int main() {
	cin >> n >> m;
	bac(0);
}