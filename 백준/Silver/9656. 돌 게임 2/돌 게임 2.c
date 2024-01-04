#include <stdio.h>

int main()
{
	int n;
	int hu = 0;
	scanf("%d", &n);
	hu = n % 2 == 0 ? 0 : 1;
	if (hu == 0)
		printf("SK");
	else
		printf("CY");
	return 0;
}