#include <iostream>
using namespace std;

int main() {
	int num, sum = 0,cnt=0;
	for (int i = 0; i < 12; i++) {
		cin >> num;
		sum += num;
		cnt++;
		if (cnt==4) {
			if (sum == 3)
				cout << "A\n";
			else if (sum == 2)
				cout << "B\n";
			else if (sum == 1)
				cout << "C\n";
			else if (sum == 0)
				cout << "D\n";
			else
				cout << "E\n";
			sum = 0;
			cnt = 0;
		}

	}
}