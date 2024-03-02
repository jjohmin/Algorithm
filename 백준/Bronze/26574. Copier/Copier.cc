#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int a, b;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		cout << b << " " << b << "\n";
	}
}