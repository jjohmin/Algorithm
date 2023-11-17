#include <stdio.h>

int main()
{
	int n;
	int x, y;
	int xmax = -100001, xmin = 10001;
	int ymax = -100001, ymin = 10001;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (xmax < x) xmax = x;
		if (xmin > x) xmin = x;

		if (ymax < y) ymax = y;
		if (ymin > y) ymin = y;
	}
	printf("%d", (xmax - xmin) * (ymax - ymin));
	return 0;
}