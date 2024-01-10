#include <iostream>
#include <set>
#include <cstring>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string A;
	set<string> B;
	int sum = 0, cnt = 0, num = 0;;
	string C;
	cin >> A;
	for (int i = 1; i <= A.size(); i++)
		sum += i;
	for (int i = 0; i < sum; i++) {
		if (cnt == A.size() - num) {
			num++;
			cnt = 0;
		}
		C = A.substr(cnt, num + 1);
		B.insert(C);
		cnt++;
	}

	cout << B.size();
}