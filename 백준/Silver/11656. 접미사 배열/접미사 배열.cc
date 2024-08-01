#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string a;
	cin >> a;
	int len = a.length();

	string arr[1000];
	for (int i = 0; i < len; i++) {
		arr[i] = a.substr(i, len);
	}
	sort(arr, arr+len);
	for (int i = 0; i < len; i++)
		cout << arr[i] << "\n";
}