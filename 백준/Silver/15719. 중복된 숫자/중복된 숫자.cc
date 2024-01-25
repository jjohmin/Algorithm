#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,num;
	cin >> n;
	vector<bool> A(n);
	fill(A.begin(), A.end(), false);
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (A[num])
			cout << num;
		A[num]=true;
	}
}