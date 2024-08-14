#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n, l,a=0,s=0,i;
	bool mode=false;
	cin >> n >> l;
	for (i = l; i <= 100; i++) {
		if (i > 100) {
			cout << "-1";
			return 0;
		}
		a = ((2 * n) / i - (i - 1)) / 2;
		s = a + (i- 1);
		int num = 0;
		if (a >= 0) 
			for (int j = a; j <= s; j++)
				num += j;
		if (num == n) {
			mode = true;
			break;
		}
	}
	if (mode)
		for (int i = a; i <= s; i++)
			cout << i << " ";
	else
		cout << "-1";
}