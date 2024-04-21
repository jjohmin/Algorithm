#include <iostream>
#include <vector>
using namespace std;

vector<int> su;

int dynamic(int n) {
	vector<int> dp(n + 1, 1);
	int ma = 1;
	for (int i = 2; i < n + 1; i++) {
		for (int j = i - 1; j >= 1; j--) {
			if (su[i] > su[j])
				dp[i] = max(dp[i], dp[j]+1);
		}
		if (ma < dp[i])
			ma = dp[i];
	}
	return ma;
}

int main() {
	int n;
	cin >> n;
	su.resize(n + 1);
	for (int i = 1; i < n+1; i++)
		cin >> su[i];
	cout << dynamic(n);
}