#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	map<string, int> A;
	map<int, string> B;
	string C;
	for (int i = 0; i < N; i++) {
		cin >> C;
		A.insert({ C,i+1 });
		B.insert({ i + 1,C });
	}
	for (int i = 0; i < M; i++) {
		cin >> C;
		if (atoi(C.c_str())>0)
			cout << B[atoi(C.c_str())] << "\n";
		else
			cout << A[C] << "\n";
	}
}