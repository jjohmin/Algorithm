#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	queue<int> A;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		A.push(i);
	}
	while (A.size() != 1) {
		A.pop();
		A.push(A.front());
		A.pop();
	}
	cout << A.front();
}