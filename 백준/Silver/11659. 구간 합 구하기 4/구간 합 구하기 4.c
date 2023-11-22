#include <stdio.h>

int main()
{
	int n, m;
	int a, b,r=0;
	int sum[100001];
	int arr[100001];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		r += arr[i];
		sum[i] = r;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		if (a-2<0)
			printf("%d\n", sum[b - 1]);
		else
			printf("%d\n", sum[b-1]-sum[a-2]);
	}
	return 0;
}