#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    arr[n-1] <= k ? cout << 0 : cout << arr[n-1] - k;

    return 0;
}
