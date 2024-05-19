#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int cnt = 0;
	char arr[101];
	cin >> arr;
	for (int i = 0; i < strlen(arr); i++)
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			cnt++;
	cout << cnt;
}