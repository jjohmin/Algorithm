#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int gcd(long long int b, long long int s) {
	while (b % s != 0) {
		long long int num = s;
		s = b % s;
		b = num;
	}
	return s;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int N, cnt = 0, n = 0;
	cin >> N;
	vector<long long int> A(N);
	for (long long int i = 0; i < N; i++)
		cin >> A[i];
	vector<long long int> B(N-1);
	for (long long int i = A.size()-1; i > 0; i--)
		B[cnt++] = A[i] - A[i - 1];
	for (long long int i = 1; i < B.size(); i++) {
		B[0] = gcd(B[0], B[i]);
	}
	cnt = 0;
	for (long long int num = A[0];num!=A[A.size()-1]; num+=B[0]) {
		if (num != A[n])
			cnt++;
		else
			n++;
	}
	cout << cnt;
}