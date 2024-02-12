#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int n1, n2;
	while (1) {
		cin >> n1 >> n2;
		if (!n1 && !n2)
			break;
		if (n1 > n2)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}