#include <iostream>
using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	int x = ((double)a * b) / c;
	int y = ((double)a / b) * c;
	if (x > y)
		cout << x;
	else
		cout << y;
}