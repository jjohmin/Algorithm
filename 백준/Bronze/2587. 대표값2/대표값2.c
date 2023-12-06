#include <stdio.h>

int main() {
	int arr[5],sum=0,temp;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (int i = 0; i < 4; i++) {
		int min = arr[i];
		int m = i;
		for (int j = i + 1; j < 5; j++) {
			if (min > arr[j]) {
				min = arr[j];
				m = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[m];
		arr[m] = temp;
	}
	printf("%d\n%d", sum / 5, arr[2]);
	return 0;
}