#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int dp[1001][3], house[1001][3];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> house[i][j];
	dp[0][0] = house[0][0];
	dp[0][1] = house[0][1];
	dp[0][2] = house[0][2];
	for (int i = 1; i < n; i++) {
		dp[i][0] = house[i][0] + min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = house[i][1] + min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = house[i][2] + min(dp[i-1][0], dp[i-1][1]);
	}
	cout << min({ dp[n - 1][0],dp[n - 1][1],dp[n - 1][2] });
}