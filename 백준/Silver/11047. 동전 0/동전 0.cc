#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, cnt=0,i;
	cin >> n >> k;
	vector<int> A(n + 1);
	for (i = 0; i < n; i++)
		cin >> A[i];
	while (k != 0) {
		cnt += k / A[--i];
		k %= A[i];
	}
	cout << cnt;
}