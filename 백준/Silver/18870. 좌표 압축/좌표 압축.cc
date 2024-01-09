#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> B(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		B[i] = A[i];
	}
	sort(B.begin(), B.end());
	B.erase(unique(B.begin(), B.end()), B.end());
	for (int i = 0; i < N; i++) {
		int index = lower_bound(B.begin(), B.end(), A[i]) - B.begin();
		cout << index << " ";
	}
}