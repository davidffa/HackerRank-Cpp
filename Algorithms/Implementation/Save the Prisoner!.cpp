#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve() {
    ll n, m, p;
    int s;
    cin >> n >> m >> s;

    cout << (n + ((s-1) + (m % n) - 1)) % n + 1 << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
