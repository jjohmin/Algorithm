#include <iostream>
using namespace std;

int main() {
	int a, b, c, arr[10] = { 0, };
	cin >> a >> b >> c;
	long long int n = a * b * c;
	while (n != 0) {
		arr[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";
}