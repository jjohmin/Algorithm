#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

bool test(string A) {
	stack<char> B;
	for (int i = 0; i < A.size();i++) {
		if (A[i] == '(' || A[i] == '[')
			B.push(A[i]);
		else if (A[i] == ')' || A[i] == ']') {
			if (B.empty())
				return false;
			else if (A[i] == ')') {
				if (B.top() != '(')
					return false;
			}
			else if (A[i] == ']') {
				if (B.top() != '[')
					return false;
			}
			B.pop();
		}
	}
	if (!(B.empty()))
		return false;
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string A;
	while (1) {
		getline(cin,A);
		if (A[0] == '.' && A.size() == 1)
			break;
		if (test(A))
			cout << "yes\n";
		else
			cout << "no\n";
	}
}