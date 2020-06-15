#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, e = 100;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int curr = 0;

    do {
        curr += k;
        if (curr >= n) curr %= n;
        if (arr[curr] == 1) e -= 3;
        else e--;
    }while (curr != 0);

    cout << e;

    return 0;
}
