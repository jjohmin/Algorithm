#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> dp;

void fibo(int n) {
	dp.resize(n + 2);
	dp[0] = make_pair(1, 0);
	dp[1] = make_pair(0, 1);
	for (int i = 2; i < n + 1; i++)
		dp[i] = make_pair(dp[i - 1].first + dp[i - 2].first, dp[i - 1].second + dp[i - 2].second);
}

int main() {
	ios::sync_with_stdio(false);
	int n,num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		fibo(num);
		cout << dp[num].first << " "  << dp[num].second << "\n";
	}
}