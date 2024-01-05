#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<string> B(N);
	vector<pair<int, int>> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i].first;
		cin >> B[i];
		A[i].second = i;
	}
	sort(A.begin(), A.end());
	for (int i = 0; i < N; i++) {
		cout << A[i].first << " ";
		cout << B[A[i].second] << "\n";
	}
}