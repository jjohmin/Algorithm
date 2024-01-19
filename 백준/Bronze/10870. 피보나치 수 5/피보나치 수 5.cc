#include <iostream>
using namespace std;

int cnt;
int fibo(int n1, int n2) {
	if (cnt == 0) 
		return n1;
	cnt--;
	return fibo(n2, n1 + n2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> cnt;
	if (!cnt || cnt==1)
		cout << cnt;
	else
		cout << fibo(0, 1);
}