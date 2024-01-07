#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	queue<long long int> A;

	long long int N;
	long long int num;
	string str;
	cin >> N;
	for (long long int i = 0; i < N; i++) {
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