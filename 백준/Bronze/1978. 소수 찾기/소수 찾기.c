#include <stdio.h>

int main()
{
	int n,num,so=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		scanf("%d", &num);
		for (int j = 1; j < num; j++) {
			if (num % j == 0)
				cnt++;
		}
		if (cnt <= 1 && num!=1)
			so++;
	}
	printf("%d", so);
	return 0;
}