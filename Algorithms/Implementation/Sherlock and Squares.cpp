#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve() {
    ll a, b;
    cin >> a >> b;

    a = ceil(sqrt(a)), b = floor(sqrt(b));

    cout << b - a + 1 << "\n"; 
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
