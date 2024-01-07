#include <iostream>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long N;
	cin >> N;
	long long result = N;
	for (long long int p = 2; p <= sqrt(N); p++) {     // 봄
		if (N % p == 0) {
			result = result - result / p;
			while (N % p == 0)
			{
				N = N / p;
			}
		}
	}
	if (N > 1)                                         // 봄
		result = result - result / N;
	cout << result;
}