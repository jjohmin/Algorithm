#include <iostream>
using namespace std;

int main() {
	int n,m,num,arr[1001],cnt=0;
	float avg;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		avg = cnt = 0;
		for (int j = 0; j < m; j++) {
			cin >> arr[j];
			avg += arr[j];
		}
		avg /= m;
		for (int j = 0; j < m; j++)
			if (arr[j] > avg)
				cnt++;
		cout << fixed;
		cout.precision(3);
		cout << 100/((float)m / cnt) << "%\n";
	}
}