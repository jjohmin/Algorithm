#include <iostream>
using namespace std;

int main() {
	int num, t=1,g=10,number;
	bool arr[10010]; fill_n(arr,10000,true);
	for (int i = 1; i < 10000; i++) {
		if (i % g == 0 && i/g==1) {
			t = g;
			g *= 10;
		}
		num = i;
		number = i;
		for (int j = t; j > 0; j /= 10) {
			num += number / j;
			number = number % j;
		}
		if(num < 10000)
			arr[num] = false;
	}
	for (int i = 1; i < 10000; i++) {
		if (arr[i])
			cout << i << "\n";
	}
}