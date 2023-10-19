#include <stdio.h>

int main()
{
	char arr[1001];
	int n;
	scanf("%s %d", &arr, &n);
	printf("%c", arr[n-1]);
	return 0;
}