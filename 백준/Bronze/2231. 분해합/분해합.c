#include <stdio.h>

int main()
{
	long long int n,i;
	scanf("%lld", &n);
	for (i = 1; i < n; i++) {
		int sum = i;
		int i2 = i;
		for (long long int j = 1000000; j >= 1; j /= 10) {
			sum += i2 / j;
			i2 -= i2 / j*j;
		}
		if (sum == n)
			break;
	}
	if (i == n)
		printf("0");
	else
		printf("%lld", i);
}