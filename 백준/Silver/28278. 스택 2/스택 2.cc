#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	int n, num;
	stack<int> A;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n == 1) {
			cin >> num;
			A.push(num);
		}
		else if (n == 2) {
			if (A.empty())
				cout << "-1\n";
			else {
				num = A.top();
				cout << num << "\n";
				A.pop();
			}
		}
		else if (n == 3)
			cout << A.size() << "\n";
		else if (n == 4)
			cout << A.empty() << "\n";
		else {
			if (A.empty())
				cout << "-1\n";
			else
				cout << A.top() << "\n";
		}
	}
}