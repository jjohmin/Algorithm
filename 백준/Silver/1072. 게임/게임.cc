#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int result = 0;

void binary(int f, int l, int n,int x,int y) {
	int mid = (f + l) / 2;
	int count = 0;
	int num = (long long)(y + mid) * 100 / (x+mid);
	if (f > l) {
		if (!result)
			result = -1;
		return;
	}
	else if (num != n )
		if(result > mid || result==0)
			result =  mid;
	if(num == n)
		binary(mid + 1,l, n, x, y);
	else
		binary(f, mid - 1, n, x, y);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x, y;
	cin >> x >> y;
	double z = (long long)y * 100 / x;
	binary(1, x, z,x,y);
	cout << result;
}