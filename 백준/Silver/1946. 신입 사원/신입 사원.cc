#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n;
	for (long long int i = 0; i < n; i++) {
		int cnt = 1,count = 0;
		cin >> m;
		vector<pair<int,int>>A(m);
		vector<pair<int, int>>B(m);
		for (int j = 0; j < m; j++) {
			cin >> A[j].first >> A[j].second;
		}
		sort(A.begin(), A.end());
		for (int j = 1; j < A.size(); j++) {
			if (A[0].second > A[j].second) {
				B[count].second = A[j].first;
				B[count++].first = A[j].second;
			}
		}
		sort(B.begin(), B.end());
		int min = B[m - count].second;
		for (int j = m - count; j < B.size(); j++) {
			if (min >= B[j].second) {
				cnt++;
				min = B[j].second;
			}
		}
		cout << cnt << "\n";
	}
}