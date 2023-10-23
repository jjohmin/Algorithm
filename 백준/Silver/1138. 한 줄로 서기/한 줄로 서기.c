#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int memory[15];
	int result[15];

	for (int i = 0; i < n; i++) {
		scanf("%d", &memory[i]);
		result[i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (count == memory[i - 1] && result[j] == 0) {
				result[j] = i;
				break;
			}
			if (result[j] == 0)
				count++;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", result[i]);
	}

	return 0;
}
