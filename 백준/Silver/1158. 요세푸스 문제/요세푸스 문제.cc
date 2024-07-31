#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, po = 0;
	vector<int> arr(5000);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		arr[i] = i+1;
	}
	cout << "<";
	while (1) {
		po = (po + k - 1) % n--;
		if (n == 0) {
			cout << arr[po] << ">";
			break;
		}
		cout << arr[po] << ", ";
		arr.erase(arr.begin() + po);
	}
}