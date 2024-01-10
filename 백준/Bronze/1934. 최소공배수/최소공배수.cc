#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int N;
	cin >> N;
	long long int num;
	long long int a, b;
	for (long long int i = 0; i < N; i++) {
		cin >> a;
		cin >> b;
		if (a > b)
			swap(a, b);
		for (int j = b; j >= 1; j--)
			if (!(a % j) && !(b % j)) {
				num = j;
				break;
			}
		cout << a * b / (num) << "\n";
	}
}