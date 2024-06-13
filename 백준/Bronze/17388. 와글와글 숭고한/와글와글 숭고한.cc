#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int s, k, h;
	cin >> s >> k >> h;
	if (s + k + h >= 100)
		cout << "OK";
	else {
		if (min({ s, k, h }) == s)
			cout << "Soongsil";
		else if (min({ s, k, h }) == k)
			cout << "Korea";
		else if (min({ s, k, h }) == h)
			cout << "Hanyang";
	}
		
}