#include <bits/stdc++.h>

using namespace std;

void solve(int n, int arr[]) {
    int i, j, minDist;
    cin >> i >> j;

    for (int k=i; k<=j; k++) {
        if (k == i) {
            minDist = arr[k];
            continue;
        }
        minDist = min(minDist, arr[k]);
    }

    cout << minDist << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;
    int arr[n];

    for (int i=0; i<n; i++)
        cin >> arr[i];
    
    while (t--) {
        solve(n, arr);
    }
        
	return 0;
}
