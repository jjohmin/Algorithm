#include <iostream>
using namespace std;

int main() {
	int n,cnt=0;
	cin >> n;
	while (1) {
		if (n == 1)
		{
			cout << -1;
			return 0;
		}
		if (n % 5 == 0) {
			cnt += n / 5;
			break;
		}
		n -= 2;
		cnt++;
		if (n <= 0) break;
	}
	cout << cnt;
}