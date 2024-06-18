#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> s;
		for (int i = 0; i < s.size(); i++)
			s[i] =  tolower(s[i]);
		cout << s << "\n";
	}
}