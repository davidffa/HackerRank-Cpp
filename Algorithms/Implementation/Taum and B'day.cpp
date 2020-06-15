#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve() {
    ll b, w, bc, wc, z, amount = 0;
    cin >> b >> w >> bc >> wc >> z;
    
    if (b * bc <= b * (wc + z)) amount += b * bc;
    else amount += b * (wc + z);

    if (w * wc <= w * (bc + z)) amount += w * wc;
    else amount += w * (bc + z);

    cout << amount << "\n";
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
