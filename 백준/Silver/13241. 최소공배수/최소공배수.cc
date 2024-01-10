#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int a, b;
	cin >> a >> b;
	long long int n1 = a, n2 = b;
	if (a > b)
		swap(a, b);
	long long int num;
	while(b%a!=0){
		num = a;
		a = b % a;
		b = num;
	}
	cout << n1*n2/a;
}