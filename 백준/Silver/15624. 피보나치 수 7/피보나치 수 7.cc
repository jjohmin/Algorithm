#include <iostream>
#include <vector>
using namespace std;

long long int fibo(long long int n) {
	vector<long long int> dp(1000001);
	dp[0] = 0;
	dp[1] = 1;
	for (long long int i = 2; i < 1000001; i++)
		dp[i] = (dp[i - 1] + dp[i - 2])%1000000007;
	return dp[n];
}

int main() {
	ios::sync_with_stdio(false);
	long long int n;
	cin >> n;
	cout << fibo(n);
}