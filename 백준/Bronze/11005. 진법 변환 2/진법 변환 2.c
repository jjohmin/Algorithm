#include <stdio.h>

int main()
{
	int N,B,n=1,i=0,j;
	char res[31];
	scanf("%d %d", &N, &B);
	for (j = 0; N!=0 ; j++) {
		n = N;
		N = N / B;
		i = n % B;
		if (0 <= i && i <= 9)
			res[j] = i + '0';
		else if (10 <= i&& i <= 35)
			res[j] = i - 10 + 'A';
	}
	j--;
	while(j!=-1)
		printf("%c", res[j--]);
	return 0;
}