#include <iostream>
#include <algorithm>
using namespace std;

long long int gcd(long long int w, long long int s) {
	while (s%w!=0) {
		long long int tmp = w;
		w = s % w;
		s = tmp;
	}
	return w;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int j1, m1;
	long long int j2, m2;
	cin >> j1 >> m1;
	cin >> j2 >> m2;
	long long int w = gcd(j1, m1);
	if (!(j1 % w) && !(m1 % w)) {
		j1 /= w;
		m1 /= w;
	}
	w = gcd(j2, m2);
	if (!(j2 % w) && !(m2 % w)) {
		j2 /= w;
		m2 /= w;
	}
	long long int n = (j1 * m2) + (j2 * m1);
	long long int num = m1 * m2;
	w = gcd(n, num);
	cout << n/w << " " << num/w;
}