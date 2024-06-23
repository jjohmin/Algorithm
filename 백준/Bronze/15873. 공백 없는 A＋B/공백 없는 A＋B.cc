#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 110)
		cout << (n / 100) + n % 100;
	else
		cout << (n / 10) + n % 10;
}