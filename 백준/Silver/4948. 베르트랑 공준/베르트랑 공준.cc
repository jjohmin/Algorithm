#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n=0;
	vector<bool> A(123456*2+1);
	fill(A.begin(), A.end(), true);
	A[0] = A[1] = false;
	for (long long int i = 2; i <= sqrt(123456 * 2 + 1); i++) {
		if (A[i]) {
			long long int j = 2;
			while (i * j <= 123456 * 2 + 1) {
				A[i * j] = false;
				j += 1;
			}
		}
	}
	while (1) {
		long long int cnt = 0;
		cin >> n;
		if (!n)
			break;
		for (long long int i = n + 1; i <= 2 * n; i++)
			if (A[i])
				cnt++;
		cout << cnt << "\n";
	}
}