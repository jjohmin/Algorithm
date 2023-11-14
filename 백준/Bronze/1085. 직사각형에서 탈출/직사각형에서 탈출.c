#include <stdio.h>

int main()
{
	int x, y, w, h;
	int arr[4],min=10000;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	arr[0] = x - 0;
	arr[1] = y - 0;
	arr[2] = w - x;
	arr[3] = h - y;
	for (int i = 0; i < 4; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d", min);
	return 0;
}