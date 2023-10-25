#include <stdio.h>

int main() {
	int cnt = 0;
	char arr[101];
	scanf("%s", &arr);
	int l = strlen(arr);
	for (int i = 0; i < l; i++) {
		if (arr[i] == 'c' && (arr[i + 1] == '=' || arr[i + 1] == '-')) {
			cnt++;
			i++;
			continue;
		}
		if (arr[i] == 'd') {
			if (arr[i + 1] == 'z' && arr[i + 2] == '=') {
				cnt++;
				i += 2;
				continue;
			}
			else if (arr[i + 1] == '-') {

				cnt++;
				i++;
				continue;
			}
		}
		if (arr[i] == 'l' && arr[i + 1] == 'j') {
			cnt++;
			i++;
			continue;
		}
		if (arr[i] == 'n' && arr[i + 1] == 'j') {
			cnt++;
			i++;
			continue;
		}
		if (arr[i] == 's' && arr[i + 1] == '=') {
			cnt++;
			i++;
			continue;
		}
		if (arr[i] == 'z' && arr[i + 1] == '=') {
			cnt++;
			i++;
			continue;
		}
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}