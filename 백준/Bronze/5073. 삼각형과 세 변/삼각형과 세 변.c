#include <stdio.h>

int main()
{
	int a, b, c, max;
	scanf("%d %d %d", &a, &b, &c);
	while (a != 0 && b != 0 && c != 0) {
		int mode = 1;
		if (a >= b && a >= c) {
			max = a;
			if (max >= b + c) mode = 0;
		}
		else if (b >= c) {
			max = b;
			if (max >= a + c) mode = 0;
		}
		else {
			max = c;
			if (max >= a + b) mode = 0;
		}
		if (mode) {
			if (a == b && a == c && b == c) printf("Equilateral\n");
			else if (a == b && a != c || b == c && b != a || a == c && a != b) printf("Isosceles\n");
			else printf("Scalene\n");
		}
		else printf("Invalid\n");
		scanf("%d %d %d", &a, &b, &c);
	}
}