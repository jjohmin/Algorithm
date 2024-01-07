#include <iostream>
using namespace std;

int main() {
	int N,temp;
	int n1, n2;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n1 >> n2;
		if (n1 < n2) {
			temp = n1;
			n1 = n2;
			n2 = temp;
		}
		while (n1 % n2 != 0) {
			temp = n2;
			n2 = n1 % n2;
			n1 = temp;
		}
		cout << n2 << "\n";
	}
}