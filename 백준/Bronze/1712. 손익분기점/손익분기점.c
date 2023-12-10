#include <stdio.h>

int main()
{
	long long  int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	if (b >= c) {
		printf("-1");
		return 0;
	}
	int cnt = (a / (c - b) + 1);
	printf("%lld", cnt);
	return 0;
}