#include <stdio.h>

int main()
{
	int n;
	int a;
	char b[21];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		scanf("%s", &b);
		int l = strlen(b);
		for (int j = 0; j < l; j++)
			for (int k = 0; k < a; k++)
				printf("%c", b[j]);
		printf("\n");
	}
	return 0;
}