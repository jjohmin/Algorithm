#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, num;
	vector<bool> A(1000001);
	fill(A.begin(), A.end(), true);
	A[0] = A[1] = false;
	for (long long int i = 2; i <= sqrt(1000000); i++) {
		if (A[i]) {
			long long int j = 2;
			while (i * j <= 1000000) {
				A[i * j] = false;
				j += 1;
			}
		}
	}
	cin >> N;
	for (long long int i = 0; i < N;i++) {
		long long int cnt = 0;
		vector<pair<int, int>> B(1000001);
		cin >> num;
		if (num == 0)
			break;
		for (long long int j = 2; j <= num/2; j++) {
			if (A[j] && A[num - j]) {
				B[cnt].first = j;
				B[cnt].second = num - j;
				cnt++;
			}
		}
		B.resize(cnt);
		cout << num << " has " << cnt << " representation(s)\n";
		for (long long int j = 0; j < B.size(); j++)
			cout << B[j].first << "+" << B[j].second << "\n";
		cout << "\n";
	}
}