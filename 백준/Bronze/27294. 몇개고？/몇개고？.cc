#include <iostream>
using namespace std;

int T, S;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T >> S;
	if (12 <= T && T <= 16 && S == 0) cout << 320;
	else cout << 280;
}