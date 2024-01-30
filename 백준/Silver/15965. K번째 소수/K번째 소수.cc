#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int num;
	vector<bool> A(500001);
	fill(A.begin(), A.end(), true);
	A[0] = A[1] = false;
	for (long long int i = 2; i <= sqrt(500000); i++) {
		if (A[i]) {
			long long int j = 2;
			while (i * j <= 500000) {
				A[i * j] = false;
				j += 1;
			}
		}
	}
	long long int i,cnt = 0;
	cin >> num;
	for (i = 2; cnt != num; i++) {
		if (A[i])
			cnt++;
	}
	cout << i-1;
}