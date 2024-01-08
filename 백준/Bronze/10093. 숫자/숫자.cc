#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long int n1, n2,cnt=0;
	vector<long long int> A(10000000);
	cin >> n1 >> n2;
	if (n1 > n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	for (long long int i = n1 + 1; i < n2; i++) {
		A[cnt++] = i;
	}
	A.resize(cnt);
	sort(A.begin(), A.end());
	cout << cnt << "\n";
	for (int i = 0; i < cnt; i++)
		cout << A[i] << " ";
}