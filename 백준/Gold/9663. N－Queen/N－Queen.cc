#include <iostream>
#include <vector>
using namespace std;

int n,ava;
vector<vector<int>> v(16, vector<int>(16));
vector<pair<int,int>> s;

int test(int i, int j) {
	for (int x = 0; x < s.size(); x++)
		if (s[x].first + s[x].second == i + j || s[x].first-s[x].second == i - j || s[x].second == j)
				return 1;
	return 0;
}

void bac(int i) {
	if (i >= n) {
		ava++;
		return;
	}
	else {
		for (int j = 0; j < n; j++) {
			if (test(i, j))
				continue;
			v[i][j] = 1;
			s.push_back(make_pair(i, j));
			bac(i+1);
			v[i][j] = 0;
			s.pop_back();
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	bac(0);
	cout << ava;
}