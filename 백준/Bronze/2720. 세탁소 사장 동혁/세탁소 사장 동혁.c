#include <stdio.h>

int main()
{
	int T, C;
	int Q = 25, D = 10, N = 5, P = 1;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &C);
		printf("%d ", C / Q);
		C %= Q;
		printf("%d ", C / D);
		C %= D;
		printf("%d ", C / N);
		C %= N;
		printf("%d\n", C / P);
		C %= P;
	}
	return 0;
}