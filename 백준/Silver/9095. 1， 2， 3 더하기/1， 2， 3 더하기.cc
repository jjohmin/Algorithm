#include <iostream>
#include <vector>
using namespace std;

int dynamic(int n) {
	vector<int> dp(n+4);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i < n + 1; i++)
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	return dp[n];
}

int main() {
	int num,n;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n;
		cout << dynamic(n)<<"\n";
	}
}