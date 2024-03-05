#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
	int n,num,cnt=1;
	cin >> n;
	queue<int> A;
	stack<int> B;
	for (int i = 0; i < n; i++) {
		cin >> num;
		A.push(num);
	}
	while (1) {
		if (A.empty() && B.top() != cnt) {
			cout << "Sad";
			break;
		}
		else if (cnt == n) {
			cout << "Nice";
			break;
		}
		if (!(A.empty())&&A.front() == cnt) {
			A.pop();
			cnt++;
		}
		else if(!(B.empty())) {
			if (B.top() == cnt) {
				B.pop();
				cnt++;
			}
			else {
				B.push(A.front());
				A.pop();
			}
		}
		else {
			B.push(A.front());
			A.pop();
		}
	}
}