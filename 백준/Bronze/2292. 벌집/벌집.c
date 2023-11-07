#include <stdio.h>

int main()
{
	int n,i,cnt=0,c=1;
	scanf("%d", &n);
	for (i = 1; i < n; i += 6 * cnt) {
		cnt++;
		c++;
	}
	if (n == 1)
		c = 1;
	printf("%d", c);
	return 0;
}