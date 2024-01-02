#include <iostream>
using namespace std;

int main()
{
	char A[11];
	int B[10] = { 0 };
	cin >> A;
	for (int i = 0; i < 11; i++) {
		B[A[i]-'0']++;
	}
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < B[i]; j++)
			cout << i;
	}
}