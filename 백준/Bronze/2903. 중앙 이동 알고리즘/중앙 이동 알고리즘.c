#include <stdio.h>

int main()
{
	int n;
	int num, a = 2;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		a = a * 2 - 1;
		num = a * a;
	}
	printf("%d", num);
	return 0;
}