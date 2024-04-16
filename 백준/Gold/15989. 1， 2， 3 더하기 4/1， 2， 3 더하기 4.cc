#include <iostream>
#include <vector>
using namespace std;

int dynamic(int n) {
	vector<int> dp(n + 3);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	for (int i = 4; i < n + 1; i++)
		dp[i] = (dp[i - 3]) + (i / 2) + 1;
	return dp[n];
}

int main() {
	int n, num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n;
		cout << dynamic(n) << "\n";
	}
}