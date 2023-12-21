#include <stdio.h>

int main()
{
	char arr[100];
	int brr[123] = { 0 };
	scanf("%s", &arr);
	for (int i = 0; i < strlen(arr); i++) {
		brr[arr[i]]++;
	}
	for (int i = 97; i <= 122; i++) {
		printf("%d ", brr[i]);
	}
	return 0;
}