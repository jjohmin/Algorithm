#include <iostream>
using namespace std;

int main() {
	int n,num=0;
	for (int i = 0; i < 4; i++) {
		cin >> n;
		num += n;
	}
	cout << num / 60 << "\n" << num % 60;
}