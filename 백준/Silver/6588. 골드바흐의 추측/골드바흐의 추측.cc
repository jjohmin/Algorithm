#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<bool> A(1000001);
	fill(A.begin(), A.end(), true);
	A[0] = A[1] = false;
	for (long long int i = 2; i <= sqrt(1000000); i++) {
		if (A[i]) {
			long long int j = 2;
			while (i * j <= 1000000) {
				A[i * j] = false;
				j += 1;
			}
		}
	}
	long long int num;
	while (1) {
		long long int cnt = 0;
		cin >> num;
		if (!(num))
			break;
		for (long long int j = 2; j <=num/2; j++) {
			if (A[j] && A[num - j]) {
				cout << num << " = " << j << " + " << num - j << "\n";
				break;
			}
			cnt++;
		}
		if (cnt == num / 2)
			cout << "Goldbach's conjecture is wrong.\n";
	}
}