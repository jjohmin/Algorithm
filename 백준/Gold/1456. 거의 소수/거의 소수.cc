#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	long min, max;              // 봄
	cin >> min >> max;
	long A[10000001];           // 봄
	for (int i = 2; i < 10000001; i++)
		A[i] = i;
	for (int i = 2; i < sqrt(10000001); i++) {
		if (A[i] == 0)
			continue;
		for (int j = i + i; j < 10000001; j = j + i)
			A[j] = 0;
	}
	int count = 0;
	for (int i = 2; i < 10000001; i++) {
		if (A[i] != 0) {
			long temp = A[i];
			while ((double)A[i] <= (double)max / (double)temp) {       // 봄
				if ((double)A[i] >= (double)min / (double)temp)        // 봄
					count++;
				temp = temp * A[i];
			}
		}
	}
	cout << count;
}