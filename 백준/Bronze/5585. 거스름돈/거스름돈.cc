#include <iostream>
using namespace std;

int main() {
	int n,cnt=0;
	int arr[6] = { 500,100,50,10,5,1 };
	cin >> n;
	n = 1000 - n;
	for (int i = 0; i < 6; i++) {
		if (n == 0)
			break;
		cnt += n / arr[i];
		n %= arr[i];
	}
	cout << cnt;
}