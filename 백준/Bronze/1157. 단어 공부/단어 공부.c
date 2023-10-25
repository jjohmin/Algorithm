#include <stdio.h>

int main()
{
	char arr[1000001];
	int chk[27] = { 0 };
	int max=0,m, e;
	scanf("%s", &arr);
	int l = strlen(arr);
	for (int i = 0; i < l; i++) {
		if (arr[i] - 'A' <= 25)
			chk[arr[i] - 'A'] += 1;
		else if (arr[i] - 'a' <= 25)
			chk[arr[i] - 'a'] += 1;
	}
	for (int i = 0; i < 26; i++) {
		if (max < chk[i]) {
			m = i;
			max = chk[i];
			e = 0;
		}
		else if (max == chk[i]) {
			e = 1;
		}
	}
	if (e == 1)
		printf("?");
	else
		printf("%c", m + 'A');
	return 0;
}