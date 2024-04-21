#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;

int dynamic(int n) {
	vector<int> dp(n + 1,1);
	for (int i = 2; i < n + 1; i++)
		for (int j = i - 1; j >= 1; j--)
			if (arr[i] < arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
	sort(dp.begin(), dp.end());
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	arr.resize(n + 1);
	for (int i = 1; i < n + 1; i++)
		cin >> arr[i];
	cout << dynamic(n);
}