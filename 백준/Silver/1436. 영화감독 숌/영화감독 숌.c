#include <stdio.h>

int main()
{
	int n,cnt=0,num=665;
	scanf("%d", &n);
	while (cnt != n) {
		int count = 0;
		int con = 0;
		int p = num;
		for (int i = 10000000; i >= 1; i /= 10) {
			if (p / i == 6) {
				count++;
				con++;
			}
			else {
				count = 0;
				con = 0;
			}
			p -= p / i * i;
			if (count == 3 && con==3) {
				cnt++;
				break;
			}
		}
		num++;
	}
	printf("%d", num-1);
	return 0;
}