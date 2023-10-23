#include <stdio.h>

int main()
{
	char arr1[4], arr2[4];
	int ar1[4], ar2[4],cnt=2;
	int ac=0, bc=0;
	scanf("%s", &arr1);
	scanf("%s", &arr2);
	for (int i = 0; i < 3; i++) {
		ar1[cnt] = arr1[i] - '0';
		ar2[cnt] = arr2[i] - '0';
		cnt--;
	}
	for (int i = 0; i < 3; i++) {
		if (ar1[i] > ar2[i]) {
			ac++;
			break;
		}
		else if (ar1[i] < ar2[i]) {
			bc++;
			break;
		}
	}
	if (ac > bc)
		for (int i = 0; i < 3; i++)
			printf("%d", ar1[i]);
	else
		for (int i = 0; i < 3; i++)
			printf("%d", ar2[i]);
	return 0;
}