#include <iostream>
#include <set>
using namespace std;

int main() {
	int n,num;
	cin >> n;
	set<int> A;
	for (int i = 0; i < n; i++) {
		cin >> num;
		A.insert(num);
	}
	for (auto iter = A.begin(); iter != A.end(); iter++)
		cout << *iter << " ";
}