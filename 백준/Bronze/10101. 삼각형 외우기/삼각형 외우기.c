#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 60 && b == 60 && c == 60)
		printf("Equilateral");
	else if (a + b + c == 180 && a == b || a == c || b == c)
		printf("Isosceles");
	else if (a + b + c == 180)
		printf("Scalene");
	else
		printf("Error");
	return 0;
}