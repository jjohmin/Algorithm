#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	char arr[1001];
	for (int i = 0; i < n; i++) {
		scanf("%s", &arr);
		int l = strlen(arr);
		printf("%c%c\n", arr[0], arr[l-1]);
	}
	return 0;
}