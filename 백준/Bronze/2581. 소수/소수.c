#include <stdio.h>

int main()
{
	int M, N,mode=0,num=-1;
	int sum = 0;
	scanf("%d %d", &M, &N);
	for (int i = M; i <= N; i++) {
		int cnt = 0;
		if (i == 1)
			continue;
		for (int j = 2; j < i; j++)
			if (i % j == 0)
				cnt++;
		if (!cnt) {
			if (!mode)
				num = i;
			sum += i;
			mode++;
		}
	}
	if (sum)
		printf("%d\n%d", sum, num);
	else
		printf("%d", num);
	return 0;
}