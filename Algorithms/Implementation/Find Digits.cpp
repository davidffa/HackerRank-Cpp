#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;
    ll n = atoi(s.c_str());
    int count = 0;
    for (int c : s) {
        c -= 48;
        if (c != 0 && n % c == 0) count++;
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
