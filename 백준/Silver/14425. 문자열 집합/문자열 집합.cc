#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N,M;
	cin >> N >> M;
	vector<string> A(N);
	vector<string> B(M);
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < M; i++)
		cin >> B[i];
	sort(A.begin(), A.end());
	int cnt = 0;
	for (int i = 0; i < M; i++) {
		if(binary_search(A.begin(),A.end(),B[i]))
			cnt++;
	}
	cout << cnt;
}