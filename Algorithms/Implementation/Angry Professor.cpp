#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k, atTime = 0;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if (input <= 0) atTime++;
    }

    atTime >= k ? cout << "NO" : cout << "YES";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
