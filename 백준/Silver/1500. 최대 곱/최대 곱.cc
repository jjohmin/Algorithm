#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int s, k;
	long int result = 1;
	cin >> s >> k;
	while (s != 0) {
		int num = s / k--;
		result *= num;
		s -= num;
	}
	cout << result;
}