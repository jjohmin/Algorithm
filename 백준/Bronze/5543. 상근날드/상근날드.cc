#include <iostream>
using namespace std;

int main() {
	int N, min = 2001, min2 = 2001;
	for (int i = 0; i < 3; i++) {
		cin >> N;
		if (N < min)
			min = N;
	}
	for (int i = 0; i < 2; i++) {
		cin >> N;
		if (N < min2)
			min2 = N;
	}
	cout << min + min2 - 50;
}