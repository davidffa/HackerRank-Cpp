#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, maxNum = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[j] - arr[i] <= 1) count++;
            else break;
        }
        if (count > maxNum) maxNum = count;
    }

    cout << maxNum;

    return 0;
}
