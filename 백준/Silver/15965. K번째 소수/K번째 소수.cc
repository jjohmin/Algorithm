#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int num,sum=0;
	vector<bool> A(10000001);
	fill(A.begin(), A.end(), true);
	A[0] = A[1] = false;
	for (long long int i = 2; i <= sqrt(10000000); i++) {
		if (A[i]) {
			long long int j = 2;
			while (i * j <= 10000000) {
				A[i * j] = false;
				j += 1;
			}
		}
	}
	cin >> num;
	for (long long int i = 0; i <= 50000000; i++) {
		sum += A[i];
		if (sum == num) {
			cout << i;
			break;
		}
	}
}