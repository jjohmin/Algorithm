#include <stdio.h>

int main()
{
	int cnt = 0;
	char arr[20];
	scanf("%s", &arr);
	int l = strlen(arr);
	for (int i = 0; i < l; i++) {
		if (arr[i] == 65 || arr[i] == 66 || arr[i] == 67)
			cnt += 3;
		else if (arr[i] == 68 || arr[i] == 69 || arr[i] == 70)
			cnt += 4;
		else if (arr[i] == 71 || arr[i] == 72 || arr[i] == 73)
			cnt += 5;
		else if (arr[i] == 74 || arr[i] == 75 || arr[i] == 76)
			cnt += 6;
		else if (arr[i] == 77 || arr[i] == 78 || arr[i] == 79)
			cnt += 7;
		else if (arr[i] == 80 || arr[i] == 81 || arr[i] == 82 || arr[i] == 83)
			cnt += 8;
		else if (arr[i] == 84 || arr[i] == 85 || arr[i] == 86)
			cnt += 9;
		else if (arr[i] == 87 || arr[i] == 88 || arr[i] == 89 || arr[i] == 90)
			cnt += 10;
		else
			cnt += 11;
	}
	printf("%d", cnt);
	return 0;
}