#include <iostream>
#include <vector>
using namespace std;

vector<int> st;

int stair(int n) {
	vector<int> dp(n+1);
	dp[1] = st[1];
	dp[2] = st[1]+st[2];
	dp[3] = st[3] + max(st[1], st[2]);
	for(int i=4;i<n+1;i++)
		dp[i] = st[i] + max(st[i - 1] + dp[i - 3], dp[i - 2]);
	return dp[n];
}

int main() {
	int n,num;
	cin >> n;
	st.resize(n+1);
	for (int i = 0; i < n; i++) {
		cin >> num;
		st[i+1] = num;
	}
	cout << stair(n);
}