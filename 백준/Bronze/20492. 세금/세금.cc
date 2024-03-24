#include <iostream>
using namespace std;

int main() {
	int n,num;
	cin >> n;
	num = n;
	cout << n / 100 * 78 << " ";
	n = n / 100 * 20;
	cout << (num / 100 * 80) + (n / 100 * 78);
}