#include <stdio.h>

int main()
{
	int cnt1 = 1, cnt2 = 1,n1=cnt1,n2=cnt2;
	int i = 1;
	int mode=1;
	int n;
	scanf("%d", &n);
	for (;;) {
		if (i == n)
			break;
		if (mode)
			cnt2++;
		else
			cnt1++;
		n1 = cnt1, n2 = cnt2;
		i++;
		while (!(n1 == cnt2 && n2 == cnt1)) {
			if (i == n) {
				break;
			}
			if (cnt1 > cnt2) {
				n1--;
				n2++;
			}
			else {
				n1++;
				n2--;
			}
			
			i++;
		}
		mode = mode == 1 ? 0 : 1;
		cnt1 = n1, cnt2 = n2;
	}
	printf("%d/%d", n1, n2);
	return 0;
}