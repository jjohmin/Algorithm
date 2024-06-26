#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	double num = a - (double)a / 100 * b;
	if (num >= 100)
		cout << 0;
	else
		cout << 1;
}