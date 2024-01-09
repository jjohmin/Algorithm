#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	map<string, bool, greater<string>> A;
	string B;
	string C;
	for (int i = 0; i < N; i++) {
		cin >> B;
		cin >> C;
		A.insert({ B,false });
		if (C == "enter")
			A[B] = true;
		else if (C == "leave")
			A[B] = false;
	}
	for (auto iter : A) {
		if (iter.second)
			cout << iter.first << "\n";
	}
}