#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	for (int i = 0; i < A.size(); i++) {
		if (A[i] <= m)
			m++;
	}
	cout << m;
}