#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int num,n,cnt=0;
	cin >> num >> n;
	vector<bool> A(num + 1);
	fill(A.begin(), A.end(), true);
	A[0] = A[1] = false;
	for (int i = 2; i <= num; i++) {
		if (A[i]) {
			int j = 2;
			cnt++;
			if (cnt >= n) {
				cout << i;
				return 0;
			}
			while (i * j <= num) {
				if (A[i * j])
					cnt++;
				if (cnt >= n) {
					cout << i * j;
					return 0;
				}
				A[i * j] = false;
				j += 1;
			}
		}
	}
}