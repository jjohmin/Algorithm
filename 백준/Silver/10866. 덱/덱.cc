#include <iostream>
#include <deque>
using namespace std;

int main() {
	int N,num;
	cin >> N;
	deque<int> A;
	string arr;
	for (int i = 0; i < N; i++) {
		cin >> arr;
		if (arr == "push_front") {
			cin >> num;
			A.push_front(num);
		}
		else if (arr == "push_back") {
			cin >> num;
			A.push_back(num);
		}
		else if (arr == "pop_front") {
			if (A.empty())
				cout << "-1\n";
			else {
				int num = A.front();
				cout << num << "\n";
				A.pop_front();
			}
		}
		else if (arr == "pop_back") {
			if (A.empty())
				cout << "-1\n";
			else {
				int num = A.back();
				cout << num << "\n";
				A.pop_back();
			}
		}
		else if (arr == "size")
			cout << A.size() << "\n";
		else if (arr == "empty")
			cout << A.empty() << "\n";
		else if (arr == "front") {
			if (A.empty())
				cout << "-1\n";
			else
				cout << A.front() << "\n";
		}
		else{
			if (A.empty())
				cout << "-1\n";
			else
				cout << A.back() << "\n";
		}
	}
}