#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N,num;
	cin >> N;
	vector<int> A(10000000);
	vector<int> B(10000000);
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num < 0)
			B[num * -1]++;
		else
			A[num]++;
	}
	int M;
	cin >> M;
	int C;
	for (int i = 0; i < M; i++) {
		cin >> C;
		if (C < 0)
			cout << B[C*-1] << " ";
		else
			cout << A[C] << " ";
	}
}