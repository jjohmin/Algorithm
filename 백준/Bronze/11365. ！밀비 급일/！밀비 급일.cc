#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
	while (true) {
		getline(cin, str);
		if (str == "END") break;
		int len = str.length();
		for (int i = len - 1; i >= 0; i--) cout << str[i];
		cout << '\n';
	}
}