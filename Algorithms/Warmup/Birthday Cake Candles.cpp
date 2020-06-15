#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, tallestCandle, count = 0;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);
    tallestCandle = arr[n-1];

    for (int i=0; i<n; i++)
        if (arr[i] == tallestCandle) count++;

    cout << count;

    return 0;
}
