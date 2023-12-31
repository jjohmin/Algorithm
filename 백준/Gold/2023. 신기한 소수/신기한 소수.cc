#include <iostream>
using namespace std;
static int N;

void DFS(int num, int jari);
bool isPrime(int num);

int main()
{
	cin >> N;
	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);
}

void DFS(int num, int jari) {
	if (jari == N) {
		if (isPrime(num)) cout << num << endl;
		return;
	}
	for (int i = 1; i < 10; i++) {
		if (i % 2 == 0)
			continue;
		if (isPrime(num * 10 + i))
			DFS(num * 10 + i, jari + 1);
	}
}

bool isPrime(int num) {
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}