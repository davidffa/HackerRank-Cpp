#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (!k) {
        for (int i=1; i<=n; i++)
            cout << i << " ";
        cout << "\n";
    }else {
        if (n % k == 0 && (n/k) % 2 == 0) {
            for (int i=1; i<=n; i++) {
                cout << i + ((i-1) / k % 2 ? - k : k) << " ";
            }
            cout << "\n";
        }else cout << -1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

	return 0;
}
