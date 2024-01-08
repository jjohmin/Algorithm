#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0, min = 101;
	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2) {
			sum += n;
			if (min > n)
				min = n;
		}
	} 
	if (sum)
		cout << sum << "\n" << min;
	else
		cout << -1;
}