#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if ((n - 2) % 7 == 0)
		cout << 1;
	else
		cout << 0;
}