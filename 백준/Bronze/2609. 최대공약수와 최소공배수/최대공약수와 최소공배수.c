#include <stdio.h>

int main()
{
	int a, b;
	int y=0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i < 10001; i++) {
		if (a % i == 0 && b % i == 0)
			y = i;
	}
	printf("%d\n%d", y, a*b/y);
	return 0;
}