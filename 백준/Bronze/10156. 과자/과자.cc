#include <iostream>
using namespace std;

int main() {
	int k, n, m;
	cin >> k >> n >> m;
	if (k * n - m >= 0)
		cout << k * n - m;
	else
		cout << 0;
}