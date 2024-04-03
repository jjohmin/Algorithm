#include <iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
		cout << char(a[i] - 32);
}