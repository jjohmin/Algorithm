#include <iostream>
#include <map>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	string A;
	string C;
	bool q;
	map<string, bool> B;
	for (int i = 0; i < N; i++) {
		cin >> A;
		B.insert({ A,false });
	}
	int cnt = 0;
	for (int i = 0; i < M; i++) {
		cin >> C;
		if (B.find(C)!=B.end()) {
			B[C] = true;
			cnt++;
		}
	}
	cout << cnt << "\n";
	for (auto iter : B) {
		if (iter.second)
			cout << iter.first << "\n";
	}
}