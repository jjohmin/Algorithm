#include <stdio.h>

int main()
{
	long long int n, num, arr[1001], brr[170000], cnt = 0, max=0;
	scanf("%lld %lld", &n, &num);
	for (long long int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
	for (long long int i = 0; i < n - 2; i++) {
		for (long long int j = i+1; j < n - 1; j++) {
			for (long long int k = j+1; k < n; k++)
				brr[cnt++] = arr[i] + arr[j] + arr[k];
		}
	}
	for (long long int i = 0; i < cnt; i++) {
		if (brr[i] <= num) {
			if (max <= brr[i])
				max = brr[i];
		}
	}
	printf("%lld", max);
	return 0;
}