#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, num;
	vector<bool> A(1000001);
	vector<bool> v(1000001);
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
	while (1) {
		long long int cnt = 0;
		fill(v.begin(), v.end(), true);
		cin >> num;
		if (num == 0)
			break;
		for (long long int j = 2; j < num; j++) {
			if (A[j] && A[num - j] && v[j]) {
				cnt++;
				v[j] = false;
				v[num - j] = false;
			}
		}
		cout << cnt << "\n";
	}
}