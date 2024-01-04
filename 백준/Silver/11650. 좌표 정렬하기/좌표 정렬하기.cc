#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i].first;
		cin >> A[i].second;
	}
	sort(A.begin(), A.end());
	for (int i = 0; i < N; i++) {
		cout << A[i].first << " ";
		cout << A[i].second << "\n";
	}
}