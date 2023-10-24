#include <stdio.h>

int main()
{
	int n, j, cnt = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (j = 1; j < n - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < cnt ; k++) {
			printf("*");
		}
		printf("\n");
		cnt += 2;
	}
	cnt -= 2;
	for (int i = 0; i < n - 1; i++) {
		cnt -= 2;
		for (j = 0; j <= i; j++)
			printf(" ");
		for (int k = 0; k < cnt; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}