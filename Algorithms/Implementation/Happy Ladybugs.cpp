#include <bits/stdc++.h>

using namespace std;

bool hasPair(map<char, int> mp) {
    for (auto p : mp) {
        if (p.second == 1) {
            return false;
        }
    }
    return true;
}

void solve() {
    map<char, int> mp;
    int n;
    cin >> n;
    bool hasSpace = 0;
    string s;
    cin >> s;

    for (char c : s) {
        if (c == '_') {
            hasSpace = 1;
            continue;
        }
        ++mp[c];
    }

    if (!hasSpace) {
        bool ordered = 1, warn = 0;
    
        for (int i=0; i<n; i++) {
            if (i != 0 && s[i] != s[i-1] && warn) {
                ordered = 0;
                break;
            }else if (i != 0 && s[i] != s[i-1]) {
                warn = 1;
            }else warn = 0;
        }

        if (ordered && hasPair(mp)) cout << "YES\n";
        else {
            cout << "NO\n";
        }
        return;
    }

    if (hasPair(mp)) cout << "YES\n";
    else cout << "NO\n";
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
