#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		vector<int> A(n);
		for (int i = 0; i < n; i++)
			cin >> A[i];
		A.erase(unique(A.begin(), A.end()), A.end());
		for (auto i=A.begin();i!=A.end();i++)
			cout << *i << " ";
		cout << "$\n";
	}
	
}