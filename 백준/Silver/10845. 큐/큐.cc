#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> A;

	int N;
	int num;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> num;
			A.push(num);
		}
		else if (str == "pop") {
			if(A.empty())
				cout << -1 << "\n";
			else {
				cout << A.front() << "\n";
				A.pop();
			}
		}
		else if (str == "size")
			cout << A.size() << "\n";
		else if (str == "empty")
			cout << A.empty() << "\n";
		else if (str == "front") {
			if (A.empty())
				cout << -1 << "\n";
			else
				cout << A.front() << "\n";
		}
		else if (str == "back") {
			if (A.empty())
				cout << -1 << "\n";
			else
				cout << A.back() << "\n";
		}
	}
}