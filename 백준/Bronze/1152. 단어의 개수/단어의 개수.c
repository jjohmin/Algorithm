#include <stdio.h>

int main()
{
	int cnt = 1;
	char arr[1000002];
	fgets(arr,1000002,stdin);
	int l = strlen(arr);
	for (int i = 0; i < l; i++) {
		if (arr[i] == ' ' && i!=0 && i!=l-2)
			cnt++;
	}
	if (arr[0] == ' ' && l<=3 && arr[l-1]=='\n')
		cnt--;
	printf("%d", cnt);
	return 0;
}