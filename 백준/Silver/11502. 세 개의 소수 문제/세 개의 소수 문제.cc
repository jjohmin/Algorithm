#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<bool> A(10001);

void check(int num) {
	for (int j = 2; j <= num; j++) {
		for (int k = 2; k <= num; k++) {
			for (int l = 2; l <= num; l++) {
				if (A[j] && A[k] && A[l] && j + k + l == num) {
					cout << j << " " << k << " " << l << "\n";
					return;
				}
			}
		}
	}
	cout << 0 << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	fill(A.begin(), A.end(), true);
	A[0] = A[1] = false;
	for (long long int i = 2; i <= sqrt(10000); i++) {
		if (A[i]) {
			long long int j = 2;
			while (i * j <= 10000) {
				A[i * j] = false;
				j += 1;
			}
		}
	}
	int n, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		check(num);
	}
}