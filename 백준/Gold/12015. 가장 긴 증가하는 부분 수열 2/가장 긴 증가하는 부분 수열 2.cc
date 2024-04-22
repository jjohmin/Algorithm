#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;
vector<int> eb(2);

int binary(int first,int last,int n) {
	int mid = (first + last) / 2;
	if (first > last)
		return first;
	else if (eb[mid] > n)
		return binary(first, mid - 1, n);
	else if (eb[mid] < n)
		return binary(mid + 1, last, n);
	else
		return mid;
}

int dynamic(int n) {
	eb[1] = arr[1];
	for (int i = 2; i < n + 1; i++) {
		if (eb.back() < arr[i])
			eb.push_back(arr[i]);
		else {
			eb[binary(0, eb.size() - 1, arr[i])] = arr[i];
		}
	}

	return eb.size()-1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	arr.resize(n + 1);
	for (int i = 1; i < n + 1; i++)
		cin >> arr[i];
	cout << dynamic(n);
}