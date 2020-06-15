#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 1 << "\n";
        return;
    }

    int height = 1;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) height++;
        else height *= 2;
    }
    
    cout << height << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
