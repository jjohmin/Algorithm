#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	n %= 8;
	if (n == 1) cout << 1;
	if (n == 2 || n == 0) cout << 2;
	if (n == 3 || n == 7) cout << 3;
	if (n == 4 || n == 6) cout << 4;
	if (n == 5) cout << 5;
}