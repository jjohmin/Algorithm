#include <stdio.h>

int main()
{
	int n,sum=0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		sum += n * n;
	}
	printf("%d", sum % 10);
	return 0;
}