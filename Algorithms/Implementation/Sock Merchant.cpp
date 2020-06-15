#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, pairs = 0; 
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    sort(arr, arr+n);

    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i+1]) {
            pairs++;
            i++;
        }
    }

    cout << pairs;

    return 0;
}

