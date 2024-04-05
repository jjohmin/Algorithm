#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,cnt=0;
	cin >> n;
	vector<char> A(n+1);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		if (A[i] == 'a' || A[i] == 'i' || A[i] == 'u' || A[i] == 'e' || A[i] == 'o')
			cnt++;
	}
	cout << cnt;
}