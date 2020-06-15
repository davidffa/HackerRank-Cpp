#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if (a>b) swap(a, b);

    for (int i=n; i>0; i--) {
        int sum = i * a + (n-i) * b;
        sum -= a;
        cout << sum << " ";
        if (a==b) break;
    }
    cout << "\n";
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
