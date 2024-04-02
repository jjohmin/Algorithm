#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<char> A(3);
	for (int i = 0; i < 3; i++)
		cin >> A[i];
	for (int i = 2; i >= 0; i--)
		cout << A[i];
}