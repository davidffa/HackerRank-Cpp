#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> mp;
    int n, b = 0;
    cin >> n;

    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        ++mp[x];
    }

    for (auto p : mp) {
        if (p.second > b) b = p.second;
    }

    cout << abs(b - n) << "\n";

	return 0;
}
