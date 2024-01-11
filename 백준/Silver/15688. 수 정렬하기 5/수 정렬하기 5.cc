#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int N;
	cin >> N;
	vector<long long int> A(N);
	for (long long int i = 0; i < N; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	for (long long int i = 0; i < A.size(); i++)
		cout << A[i] << "\n";
}