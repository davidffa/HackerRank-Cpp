#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int lb, rb;
    cin >> lb >> rb;
    bool t = 0;

    for (int i=lb; i<=rb; i++) {
        string s = to_string((ll)i * (ll)i);
        ll sub = s.size()/2;
        int x = atoi(s.substr(0, sub).c_str()) + atoi(s.substr(sub, s.size()).c_str());
        if (!t && x == i) t = 1;
        if (x == i) cout << i << " ";
    }

    if (!t) cout << "INVALID RANGE";

	return 0;
}
