#include <iostream>
#include <vector>
using namespace std;

int apart(int a,int b) {
	vector<vector<int>> dp(a + 2, vector<int>(b+2));
	for (int i = 1; i <= b; i++)
		dp[0][i] = i;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			if (j == 1)
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = dp[i][j-1] + dp[i - 1][j];
		}
	}
	return dp[a][b];
}

int main() {
	int n,a,b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << apart(a,b) << "\n";
	}
}