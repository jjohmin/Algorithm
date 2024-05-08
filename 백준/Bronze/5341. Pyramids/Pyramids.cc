#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    int n; cin >> n;

    if (n == 0)
      break;

    int result = n * (n + 1) / 2;
    cout << result << "\n";
  }

  return 0;
}