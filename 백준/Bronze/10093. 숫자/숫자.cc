#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	unsigned long long n1, n2,cnt=0;
	vector<unsigned long long> A(10000000);
	cin >> n1 >> n2;
	if (n1 > n2) {
		swap(n1, n2);
	}
	for (unsigned long long i = n1 + 1; i < n2; i++) {
		A[cnt++] = i;
	}
	A.resize(cnt);
	sort(A.begin(), A.end());
	cout << cnt << "\n";
	for (unsigned long long i = 0; i < cnt; i++)
		cout << A[i] << " ";
}