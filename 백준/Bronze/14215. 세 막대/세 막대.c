#include <stdio.h>

int main()
{
	int a, b, c, max=0;
	scanf("%d %d %d", &a, &b, &c);
	if (max < a) max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max >= a + b + c - max) printf("%d", (2 * (a + b + c - max)) - 1);
	else if (max < a + b + c - max) printf("%d\n", a + b + c);
	return 0;
}