#include <iostream>
using namespace std;

int main() {
	int n,o=0,t=0;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		if (n == 1)
			o++;
		else
			t++;
	}
	if (o < t)
		cout << 2;
	else
		cout << 1;

}