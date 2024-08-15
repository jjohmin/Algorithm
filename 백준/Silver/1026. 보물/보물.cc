#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n,num=0;
	vector<int> arr(51), brr(51);
	cin >> n;
	arr.resize(n);
	brr.resize(n);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++) {
			if (i)
				cin >> brr[j];
			else
				cin >> arr[j];
		}
	}
	sort(arr.begin(), arr.end());
	sort(brr.begin(), brr.end(), greater<>());
	for (int i = 0; i < n; i++)
		num+= arr[i] * brr[i];
	cout << num;
}