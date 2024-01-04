#include <stdio.h>

int main()
{
	long long int n;
	long long int hu = 0;
	scanf("%lld", &n);
	hu = n % 2 == 0 ? 1 : 0;
	if (hu == 0)
		printf("SK");
	else
		printf("CY");
	return 0;
}