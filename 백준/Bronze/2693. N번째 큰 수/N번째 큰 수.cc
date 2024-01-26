#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<int> A(10);
		for (int j = 0; j < 10; j++) {
			cin >> A[j];
		}
		sort(A.begin(), A.end());
		cout << A[7] << "\n";
	}
}