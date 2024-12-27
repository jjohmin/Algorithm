#include <iostream>
#include <algorithm>
using namespace std;
int rope[100000];

int main() {
	int N;	// 로프의 개수
	int current;	// 현재 중량
	int max;	// 최대 중량
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> rope[i];
	}

	// 로프의 중량을 정렬
	sort(rope, rope + N);
	
	// 최댓값을 우선 중량이 가장 큰 로프 하나만 이용했을 때로 초기화
	max = rope[N - 1];

	for (int i = N - 1; i >= 0; i--) {
		// 현재 로프의 중량 (해당 로프의 중량 * 몇 개 달았는지)
		current = rope[i] * (N - i);
		if (max < current) {	// 최대 중량보다 현재 중량이 더 크다면
			max = current;	// 최대 중량을 현재 값으로 초기화
		}
	}

	cout << max;

	return 0;
}