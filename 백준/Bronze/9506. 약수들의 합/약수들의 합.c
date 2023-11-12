#include <stdio.h>

int main()
{
	int n=0,i;
	while (1)
	{
		scanf("%d", &n);
		if (n == -1)
			break;
		int cnt = 0;
		for (i = 1; i < n; i++) {
			if (n % i == 0)
				cnt += i;
		}
		if (cnt==n) {
			printf("%d = 1 ", n);
			for (int j = 2; j < n; j++) {
				if (n % j == 0)
					printf("+ %d ", j);
			}
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n", n);
	}
	return 0;
}