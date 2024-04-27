#include <iostream>
using namespace std;

int main() {
	int n,m,num;
	cin >> n >> m;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		cout << num-n*m << " ";
	}
}