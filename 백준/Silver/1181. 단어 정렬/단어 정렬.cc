#include <iostream>
#include <algorithm>
using namespace std;

int cmp(string a, string b) {
	if (a.length() == b.length())
		return  a < b;
	else
		return a.length() < b.length();
}

int main() {
	int N;
	cin >> N;
	string word[20000];
	for (int i = 0; i < N; i++)
		cin >> word[i];
	sort(word, word + N, cmp);
	for (int i = 0; i < N; i++) {
		if(word[i-1] != word[i])
			cout << word[i] << "\n";
	}
}