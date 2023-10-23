#include <stdio.h>

int main()
{
	int n;
	int arr[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++) {
		scanf("%d", &n);
		arr[i] = arr[i] - n;
	}
	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	return 0;
}