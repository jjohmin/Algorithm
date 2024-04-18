#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int arr[7] = { 425,450,495,570,590,620,781 }, N;
    string s[7] = { "Violet","Indigo","Blue","Green","Yellow","Orange","Red" };

    cin >> N;
    cout << s[upper_bound(arr, arr + 7, N) - arr];
}