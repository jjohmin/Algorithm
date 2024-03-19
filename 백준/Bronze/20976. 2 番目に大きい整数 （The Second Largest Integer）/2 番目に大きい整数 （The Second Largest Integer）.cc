#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> A(4);
	for (int i = 0; i < 3; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	cout << A[2];
}