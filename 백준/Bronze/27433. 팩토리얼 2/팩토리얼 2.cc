#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int n,sum=1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	cout << sum;
}