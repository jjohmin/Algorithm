#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N,num,sum=0;
	cin >> N;
	stack<int> A;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (!(num)) {
			if (A.empty())
				A.push(num);
			else
				A.pop();
		}
		else
			A.push(num);
	}
	num = A.size();
	for (int i = 0; i < num; i++) {
		sum += A.top();
		A.pop();
	}
	cout << sum;
}