#include <stdio.h>

int main()
{
	int n,m,temp;
	int arr[1001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n - 1; i++) {
		int min = arr[i];
		m = i;
		for (int j = i+1; j < n; j++) {
			if (min > arr[j]) {
				min = arr[j];
				m = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[m];
		arr[m] = temp;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	return 0;
}