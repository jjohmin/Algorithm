#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n1, n2;
	cin >> n1 >> n2;
	vector<long long int> A(n1 + n2);
	for (long long int i = 0; i < n1 + n2; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	for (long long int i = 0; i < A.size(); i++)
		cout << A[i] << " ";
}