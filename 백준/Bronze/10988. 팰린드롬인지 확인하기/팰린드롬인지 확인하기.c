#include <stdio.h>

int main() {
	int cnt = 0;
	char arr[101];
	char brr[101];
	scanf("%s", &arr);
	int l = strlen(arr);
	int j = l-1;
	for (int i = 0; i < l; i++) {
		brr[i]=arr[i];
	}
	for (int i = 0; i < l; i++) {
		if (arr[i] == brr[j])
			cnt++;
		j--;
	}
	if (cnt == l)
		printf("1");
	else
		printf("0");
	return 0;
}