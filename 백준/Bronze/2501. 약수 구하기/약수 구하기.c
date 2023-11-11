#include <stdio.h>

int main()
{
	int K, N,cnt=0,i;
	scanf("%d %d", &K, &N);
	for (i = 1; i <= K; i++) {
		if (cnt == N)
			break;
		if (K % i == 0)
			cnt++;
	}
	if (cnt != N)
		printf("0");
	else
		printf("%d", i-1);
	return 0;
}