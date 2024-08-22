#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, cnt = 1, count=1;
	vector<char> v;
	vector<int> num(100001);
	cin >> n;
	stack<int> s;
	for (int i = 1; i <= n; i++)
		cin >> num[i];
	while(1) {
		if (s.empty()) {
			s.push(count++);
			v.push_back('+');
		}
		if (s.top() == num[cnt]) {
			s.pop();
			v.push_back('-');
			if (cnt == n)
				break;
			cnt++;
		}
		else if (s.top() < num[cnt]) {
			s.push(count++);
			v.push_back('+');
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}
