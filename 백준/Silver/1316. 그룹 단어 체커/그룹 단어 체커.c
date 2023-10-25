#include <stdio.h>

int main()
{
	int n,cnt=0,o=0;
	char arr[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		scanf("%s", &arr);
		int brr[26] = { 0 };
		int l = strlen(arr);
		for (int j = 0; j < l; j++) {
			if (brr[arr[j] - 'a'] == 0 || arr[j]==arr[j - 1]) {
				brr[arr[j] - 'a'] += 1;
				cnt++;
			}
			else
				if(!(brr[arr[j]-'a']==brr[arr[j-1]]-'a'))
					break;
		}
		if (cnt == l )
			o++;

	}
	printf("%d", o);
	return 0;
}