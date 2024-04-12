#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned int a,b,cnt=1;
	cin >> a >> b;
	while (b > a) {
		if (b % 10 == 1) {
			b /= 10;
			cnt++;
		}
		else {
			if (b % 2 == 1)
				break;
			b /= 2;
			cnt++;
		}
	}
	if (b == a)
		cout << cnt;
	else
		cout << -1;
}