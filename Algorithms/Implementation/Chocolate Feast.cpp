#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, c, m, t1 = 0, total = 0;
    cin >> n >> c >> m;

    while (n >= c) {
        n -= c;
        t1++;
    }

    total += t1;

    while (t1 >= m) {
        t1 -= m;
        t1++;
        total++;
    }

    cout << total << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

	return 0;
}
