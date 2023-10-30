#include <stdio.h>

int main()
{
	int num, a, b, cnt = 0;
	int arr[101][101] = { 0 };
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &a,&b);
		for (int j = b; j < b + 10; j++) {
			for (int k = a; k < a + 10; k++)
				arr[j][k] = 1;
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++)
			if (arr[i][j])
				cnt++;
	}
	printf("%d", cnt);
	return 0;
}