#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000001
long long int arr[MAX], sorted[MAX];

void merge(long long int left, long long int mid, long long int right) {
	long long int i = left;
	long long int j = mid + 1;
	long long int k = left;
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j])
			sorted[k++] = arr[i++];
		else
			sorted[k++] = arr[j++];
	}
	if (i > mid)
		for (long long int num = j; num <= right; num++)
			sorted[k++] = arr[num];
	else
		for (long long int num = i; num <= mid; num++)
			sorted[k++] = arr[num];
	for (long long int num = left; num <= right; num++)
		arr[num] = sorted[num];
}

void merge_sort(long long int left, long long int right) {
	if (left < right) {
		long long int mid = (left + right) / 2;
		merge_sort(left, mid);
		merge_sort(mid + 1, right);
		merge(left, mid, right);
	}
}

int main()
{
	long long int n;
	scanf("%lld", &n);
	for (long long int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
	merge_sort(0, n - 1);
	for (long long int i = 0; i < n; i++)
		printf("%lld\n", arr[i]);
}