#include <stdio.h>

int main()
{
	int arr[101] = { 0 }, n, cnt=0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &n);
		arr[n]++;
	}
	for (int i = 0; i < 101; i++) {
		if (arr[i])
			cnt+=arr[i];
		if (cnt >= 2) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}