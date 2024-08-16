#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,cnt=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i < 100)
			cnt++;
		else {
			int h = i / 100;
			int t = (i-h*100) / 10;
			int o = i % 10;
			int d1 = h - t;
			int d2 = t - o;
			if (d1 == d2)
				cnt++;
		}
	}
	cout << cnt;
}