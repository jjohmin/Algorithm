#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

char arr[100];

void test() {
	stack<char> A;
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '(')
			A.push(arr[i]);
		if (arr[i] == ')') {
			if (A.empty()) {
				cout << "NO\n";
				return;
			}
			A.pop();
		}
	}
	if (!(A.empty()))
		cout << "NO\n";
	else
		cout << "YES\n";
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr;
		test();
	}
}