#include <iostream>
using namespace std;

int main() {
	int min=0, man=0;
	int n;
	for (int i = 0; i < 4; i++) {
		cin >> n;
		min += n;
	}
	for (int i = 0; i < 4; i++) {
		cin >> n;
		man += n;
	}
	if (min > man)
		cout << min;
	else
		cout << man;
}