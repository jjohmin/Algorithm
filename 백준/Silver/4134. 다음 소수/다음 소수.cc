#include <iostream>
#include <math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int N,num;
	cin >> N;
	for (long long int i = 0; i < N; i++) {
		cin >> num;
		while (1) {
			long long int cnt = 0;
			if (num == 1 || num == 0) {
				cout << 2 << "\n";
				break;
			}
			else if (num != 2 && num != 3) {
				if (num % 2 == 0 || num % 3 == 0) {
					cnt = 1;
				}
				else {
					for (long long int j = 5; j <= sqrt(num); ++j) {
						if (j > sqrt(num)) {
							cnt = 0;
							break;
						}
						else if (!(num % j) || !(num%(j+2))) {
							cnt = 1;
							break;
						}
					}
				}
			}
			if (!cnt) {
				cout << num << "\n";
				break;
			}
			num++;
		}
	}
}