#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int count = 0;

	for (int K = 0; K < N; K++) {
		int find = A[K];
		int i = 0;
		int j = N - 1;
		while (i < j) {
			if (A[i] + A[j] == find) {
				if (i != K && j != K) {
					count++;
					break;
				}
				else if (i == K)
					i++;
				else if (j == K)
					j--;
			}
			else if (A[i] + A[j] < find)
				i++;
			else
				j--;
		}
	}
	cout << count << endl;
}