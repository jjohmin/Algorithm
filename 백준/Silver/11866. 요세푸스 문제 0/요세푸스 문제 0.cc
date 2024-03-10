#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	queue<int> A;
	for (int i = 1; i <= n; i++)
		A.push(i);
	cout << "<";
	while (!(A.empty())) {
		for (int i = 1; i < k; i++) {
			A.push(A.front());
			A.pop();
		}
		cout << A.front();
		A.pop();
		if (A.empty())
			cout << ">";
		else
			cout << ", ";
	}
}