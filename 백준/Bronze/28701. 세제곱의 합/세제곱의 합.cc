#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,sum;
	cin >> n;
	for (int i = 1; i <= 3; i++) {
		sum = 0;
		for (int j = 1; j <= n; j++) {
			if (i == 3)
				sum += pow(j, i);
			else
				sum += j;
		}
		if (i==2)
			cout << sum*sum << "\n";
		else
			cout << sum << "\n";
	}
}