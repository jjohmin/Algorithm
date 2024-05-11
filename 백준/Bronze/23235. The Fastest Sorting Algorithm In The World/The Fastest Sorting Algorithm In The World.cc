#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 1;
	string s;
	while (1) {
		getline(cin, s);
		if (s == "0") break;
		cout << "Case " << cnt++ << ": Sorting... done!\n";
	}
}