#include <iostream>
#include <vector>
using namespace std;

int tile(int n) {
	vector<int> dp(n + 2);
	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i < n + 1; i++)
		dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	cout << tile(n);
}