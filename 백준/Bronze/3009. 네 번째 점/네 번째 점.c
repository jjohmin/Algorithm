#include <stdio.h>

int main()
{
	int x[3], y[3],rx,ry;
	scanf("%d %d %d %d %d %d", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2]);
	if (x[0] != x[1] && x[0] == x[2]) rx = x[1];
	else if (x[0] != x[1] && x[1] == x[2]) rx = x[0];
	else if (x[0] == x[1]) rx = x[2];

	if (y[0] != y[1] && y[0] == y[2]) ry = y[1];
	else if (y[0] != y[1] && y[1] == y[2]) ry = y[0];
	else if (y[0] == y[1]) ry = y[2];

	printf("%d %d", rx, ry);
	return 0;
}