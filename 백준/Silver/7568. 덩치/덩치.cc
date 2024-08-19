#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,cnt=1, count=0,check=0;
	vector<vector<int>> human(50,vector<int>(4));
	cin >> n;
	human.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> human[i][0] >> human[i][1];
		human[i][3] = i;
	}
	sort(human.begin(), human.end());
	for (int i = 0; i < n; i++) {
		cnt = 0;
		for (int j = i + 1; j < n; j++) {
			if (human[i][0] < human[j][0] && human[i][1] < human[j][1])
				cnt++;
		}
		human[i][2] = cnt + 1;
	}
	cnt = 0;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			if (human[i][3] == cnt) {
				cout << human[i][2] << " ";
				cnt++;
			}
		}
	}
}