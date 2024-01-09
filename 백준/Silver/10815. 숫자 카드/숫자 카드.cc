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
	vector<long long int> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];
	int M;
	cin >> M;
	vector<long long int> B(M);
	sort(A.begin(), A.end());
	for (int j =0; j < M; j++)
		cin >> B[j];
	for (int i = 0; i < M; i++) {;
		if (binary_search(A.begin(), A.end(), B[i]))
			cout << "1 ";	
		else
			cout << "0 ";
	}
}