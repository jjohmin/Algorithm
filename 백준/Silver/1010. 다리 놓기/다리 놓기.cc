#include <iostream>
using namespace std;

int result[31][31];

int com(int a, int b) {
	if (a == b)
		return 1;
	else if (b < 0 || a < b)
		return 0;
	else {
		if (result[a][b]) return result[a][b];
		else {
			result[a][b] = com(a - 1, b - 1) + com(a - 1, b);
			return result[a][b];
		}
	}
}

int main() {
	int n, m, t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		cout << com(m, n) << "\n";
	}
}