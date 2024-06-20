#include <iostream>
using namespace std;

int main() {
	int k, d, a;
	char t;
	cin >> k >> t >> d >> t >> a;
	if (k + a < d || d == 0)
		cout << "hasu";
	else
		cout << "gosu";
}