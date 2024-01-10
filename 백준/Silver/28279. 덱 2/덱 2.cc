#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	deque<int> A;
	int N;
	cin >> N;
	int n, num;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n == 1) {
			cin >> num;
			A.push_front(num);
		}
		else if (n == 2) {
			cin >> num;
			A.push_back(num);
		}
		else if (n == 3) {
			if (A.empty())
				cout << "-1\n";
			else {
				num = A.front();
				cout << num << "\n";
				A.pop_front();
			}
		}
		else if (n == 4) {
			if (A.empty())
				cout << "-1\n";
			else {
				num = A.back();
				cout << num << "\n";
				A.pop_back();
			}
		}
		else if (n == 5)
			cout << A.size() << "\n";
		else if (n == 6)
			cout << A.empty() << "\n";
		else if (n == 7) {
			if (A.empty())
				cout << "-1\n";
			else
				cout << A.front() << "\n";
		}
		else if (n == 8) {
			if (A.empty())
				cout << "-1\n";
			else
				cout << A.back() << "\n";
		}
	}
}