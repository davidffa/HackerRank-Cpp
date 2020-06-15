#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, d, count = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> d >> m;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        if (i+m > n) break; 
        for (int j = i; j < i+m; j++) {
            sum += arr[j];
        }
        if (sum == d) count++;
    }

    cout << count;

    return 0;
}

