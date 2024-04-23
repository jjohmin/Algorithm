#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long int> et;

long long int binary(long long int f,long long int l,long long int m) {
	long long int mid = (f + l) / 2;
	long long int num = 0;
	for (long long int i = 0; i < et.size(); i++)
		if(et[i] - mid>0)
			num += et[i] - mid;
	if (f > l)
		return mid;
	else if (num > m)
		return binary(mid + 1, l, m);
	else if (num < m)
		return binary(f, mid - 1, m);
	else
		return mid;
}

int main() {
	long long int n, m;
	cin >> n >> m;
	et.resize(n+1);
	for (long long int i = 0; i < n; i++)
		cin >> et[i];
	sort(et.begin(), et.end());
	cout << binary(1,et[n], m);
}