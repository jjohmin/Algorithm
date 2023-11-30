#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	int x, y,pass=0;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	for (x = -999; x <= 999; x++) {
		for (y = -999; y <= 999; y++) {
			if (a * x + b * y == c && d * x + e * y == f) {
				pass++;
				break;
			}
		}
		if (pass)
			break;
	}
	printf("%d %d", x, y);
	return 0;
}