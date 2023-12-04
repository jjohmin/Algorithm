#include <stdio.h>

int main()
{
	char arr[50][50];
	char answer1[8][8] = {
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'}
	};
	char answer2[8][8] = {
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'}
	};
	int a, b, cnt[100000]={0}, count = 0, min = 100, x,y;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
			scanf("%s", &arr[i]);
	for (int i = 0; i <= a - 8; i++) {
		for (int j = 0; j <= b - 8; j++) {
			x = 0, y = 0;
			for (int n = i; n < i+8; n++) {
				for (int m = j; m < j+8; m++) {
					if (arr[n][m] != answer1[x][y++])
						cnt[count]++;
				}
				x++;
				y = 0;
			}
			count++;
			x = 0, y = 0;
			for (int n = i; n < i + 8; n++) {
				for (int m = j; m < j + 8; m++) {
					if (arr[n][m] != answer2[x][y++])
						cnt[count]++;
				}
				x++;
				y = 0;
			}
			count++;
		}
	}
	for (int i = 0; i < count; i++) {
		if (min > cnt[i])
			min = cnt[i];
	}
	printf("%d", min);
	return 0;
	
}