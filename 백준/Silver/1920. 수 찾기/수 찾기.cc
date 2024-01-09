#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	int M;
	cin >> M;
	vector<int> B(M);
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}
	for (int i = 0; i < M; i++) {
		if (binary_search(A.begin(), A.end(), B[i]))
			cout << "1\n";
		else
			cout << "0\n";
	}
}