#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int a, b,num=0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		num += b;
	}
	cout << num;
}