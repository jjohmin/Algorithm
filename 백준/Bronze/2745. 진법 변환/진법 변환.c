#include <stdio.h>

int main()
{
	char arr[31];
	int num,n=1;
	int max=0;
	scanf("%s %d", &arr,&num);
	int l = strlen(arr);
	for (int i = l-1; i >= 0; i--,n*=num) {
		if(arr[i]>47 && arr[i]<58)
			max += (arr[i] - '0') * n;
		else if (arr[i] > 64 && arr[i] < 91)
			max += (arr[i] - 'A' + 10) * n;
	}
	printf("%d", max);
	return 0;
}