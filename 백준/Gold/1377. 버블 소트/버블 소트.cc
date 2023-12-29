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
		A[i].second = i;
	}

	sort(A.begin(), A.end());

	int MAX = 0;
	for (int i = 0; i < N; i++) {
		if (MAX < A[i].second - i)
			MAX = A[i].second - i;
	}
	cout << MAX + 1;
}