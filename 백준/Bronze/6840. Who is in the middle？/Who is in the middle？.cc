#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<int> a(3);
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	cout << a[1];
}