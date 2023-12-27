#include <stdio.h>

int sorted[10001];

int main()
{
	long long int n;
	int num;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		sorted[num]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < sorted[i]; j++)
			printf("%d\n", i);
	}
	return 0;
}