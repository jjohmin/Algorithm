#include <stdio.h>

int main()
{
	int arr[101][101];
	int brr[101][101];
	int crr[101][101];
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &brr[i][j]);
			crr[i][j] = arr[i][j] + brr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", crr[i][j]);
		}
		printf("\n");
	}
	return 0;
}