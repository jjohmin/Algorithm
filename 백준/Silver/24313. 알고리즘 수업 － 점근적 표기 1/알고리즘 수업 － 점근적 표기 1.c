#include <stdio.h>

int main()
{
	long long int a1, a2, c, n;
	scanf("%lld %lld %lld %lld", &a1, &a2, &c, &n);
	if (a1 * n + a2 <= c * n && a1<=c)
		printf("1");
	else
		printf("0");
	return 0;
}