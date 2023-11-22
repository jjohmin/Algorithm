#include <stdio.h>

int main()
{
	char arr[101];
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] >= 65 && arr[i] <= 90)
			printf("%c", arr[i] + 32);
		else if (arr[i] >= 'a' && arr[i] <= 'z')
			printf("%c", arr[i] - 32);
	}
	return 0;
}