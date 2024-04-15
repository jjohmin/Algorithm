#include <iostream>
#include <vector>
using namespace std;

int dynamic(long long int n) {
	vector<long long int> dp(1000001);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (long long int i = 4; i < 1000001; i++)
		dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % 1000000009;
	return dp[n];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int n, num;
	cin >> num;
	for (long long int i = 0; i < num; i++) {
		cin >> n;
		cout << dynamic(n) << "\n";
	}
}