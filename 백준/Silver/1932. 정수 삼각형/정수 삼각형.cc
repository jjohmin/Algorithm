#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, tri[502][502];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cin >> tri[i][j];
			if (i!=0) {
				if (j==0)
					tri[i][j] += tri[i - 1][0];
				else if (j == i)
					tri[i][j] += tri[i - 1][i-1];
				else
					tri[i][j] += max(tri[i - 1][j - 1], tri[i - 1][j]);
			}
		}
	}
	int max = -1;
	for (int i = 0; i < n; i++) {
		if (max < tri[n - 1][i])
			max = tri[n - 1][i];
	}
	cout << max;
}