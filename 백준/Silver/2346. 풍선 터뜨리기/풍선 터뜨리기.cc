#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,num;
	cin >> n;
	deque<pair<int,int>> A;

	for (int i = 0; i < n; i++) {
		cin >> num;
		A.push_back(make_pair(num,i+1));
	}
	while (!(A.empty())) {
		num = A.front().first;
		cout << A.front().second << " ";
		A.pop_front();
		if (A.empty())
			break;
		if (num > 0) {
			for (int i = 0; i < num-1; i++) {
				A.push_back(A.front());
				A.pop_front();
			}
		}
		else {
			for (int i = 0; i < (-1)* num; i++) {
				A.push_front(A.back());
				A.pop_back();
			}
		}
	}
}