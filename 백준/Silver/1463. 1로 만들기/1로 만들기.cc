#include <iostream>
#include <vector>
using namespace std;

vector<int> A;

int dp(int num) {
	A[0] = 0;
	A[1] = 0;
	A[2] = 1;
	A[3] = 1;
	for (int i = 4; i < num + 1; i++) {
		if (i % 6 == 0)
			A[i] = min(1 + A[i / 2],min( 1 + A[i / 3], 1 + A[i-1]));
		else if (i % 2 == 0)
			A[i] = min(A[i / 2]+1, 1 + A[i-1]);
		else if (i % 3 == 0)
			A[i] = min(1 + A[i-1], 1 + A[i / 3]);
		else A[i] = 1 + A[i-1];
	}
	return A[num];
}

int main() {
	int n;
	cin >> n;
	A.resize(n+1);
	cout << dp(n);
}