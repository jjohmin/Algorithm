#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int num,sum=0,cnt=0;
	vector<int> A(9);
	for (int i = 0; i < 9; i++) {
		cin >> A[i];
		sum += A[i];
	}
	sort(A.begin(), A.end());
	for (int i = 0; i < 8; i++) {
		for (int j = i+1; j < 9; j++) {
			if (sum - (A[i] + A[j]) == 100) {
				A[i] = 0;
				A[j] = 0;
				cnt++;
				break;
			}
		}
		if (cnt) {
			break;
		}
	}
	sort(A.begin(), A.end());
	for (int i = 2; i < 9; i++)
		cout << A[i] << "\n";
}