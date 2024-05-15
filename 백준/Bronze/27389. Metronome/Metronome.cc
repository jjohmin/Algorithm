#include <iostream>
using namespace std;

int main() {
	int a;
	float b = 4;
	cin >> a;
	float n = a / b;
	cout << fixed;
	cout.precision(2);
	cout << n;
}