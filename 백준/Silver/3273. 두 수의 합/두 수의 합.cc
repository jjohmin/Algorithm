#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	cin >> m;
	int s=0, e=n-1, cnt = 0;
	int n1 = A[s++], n2 = A[e--];
	while (n1 != n2) {
		if (n1 + n2 > m)
			n2 = A[e--];
		else if (n1 + n2 < m)
			n1 = A[s++];
		else if (n1 + n2 == m) {
			cnt++;
			n1 = A[s++];
		}
	}
	cout << cnt;
}