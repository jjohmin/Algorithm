#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<bool> A(10001);
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
	int n,num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		for (int j = num / 2; j >= 2; j--) {
			if (A[j] && A[num - j]) {
				cout << j << " " << num - j << "\n";
				break;
			}
		}
	}
}