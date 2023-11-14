#include <stdio.h>

int main()
{
	int n,i=2;
	scanf("%d", &n);
	while (n != 1) {
		if (n % i == 0) {
			printf("%d\n", i);
			n /= i;
			i = 2;
		}
		else {
			i++;
		}
	}
	return 0;
}