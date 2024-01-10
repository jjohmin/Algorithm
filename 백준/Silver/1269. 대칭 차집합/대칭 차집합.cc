#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M,cnt=0;
	cin >> N;
	cin >> M;
	vector<int> A(N);
	vector<int> B(M);
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < M; i++)
		cin >> B[i];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	for (int i = 0; i < N; i++) {
		if (binary_search(B.begin(), B.end(), A[i]))
			cnt++;
	}
	for (int i = 0; i < M; i++) {
		if (binary_search(A.begin(), A.end(), B[i]))
			cnt++;
	}
	cout << N+M-cnt;
}