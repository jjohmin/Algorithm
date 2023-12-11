#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--)
			printf(" ");
		for (int j = i * 2 + 1; j > 0; j--)
			printf("*");
		printf("\n");
	}
	return 0;
}