#include <bits/stdc++.h>

using namespace std;

#define ll long long

int solve(ll arr[], int x, int k) {
    int f[k];
    memset(f, 0, sizeof(f));

    for (int i = 0; i < x; i++)
        f[arr[i] % k]++;
    
    if (k % 2 == 0)
        f[k/2] = min(f[k/2], 1);

    int ans = min(f[0], 1);

    for (int i = 1; i <= k/2; i++)
        ans += max(f[i], f[k-i]);

    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    ll arr[n];
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x = sizeof(arr) / sizeof(arr[0]);
    
    cout << solve(arr, x, k);

    return 0;
}
