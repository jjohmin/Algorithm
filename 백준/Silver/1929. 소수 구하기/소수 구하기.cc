#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n, m;
	cin >> n >> m;
	vector<bool> A(m + 1);
	fill(A.begin(), A.end(), true);
	A[0] = A[1] = false;
	for (long long int i = 2; i <= sqrt(m); i++) {
		if (A[i]) {
			long long int j = 2;
			while (i * j <= m) {
				A[i * j] = false;
				j += 1;
			}
		}
	}
	for (long long int i = n; i <= m; i++) {
		if (A[i])
			cout << i << "\n";
	}
}