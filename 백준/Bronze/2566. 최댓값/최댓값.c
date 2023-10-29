#include <stdio.h>

int main()
{
	int arr[10][10];
	int max = -1;
	int maxi, maxj;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j]) {
				max = arr[i][j];
				maxi = i+1;
				maxj = j+1;
			}
		}
	}
	printf("%d\n%d %d", max, maxi, maxj);
	return 0;
}