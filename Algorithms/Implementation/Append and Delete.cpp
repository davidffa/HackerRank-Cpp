#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    int k;
    cin >> s >> t >> k;

    int i = 0;
    for ( ; i < min(s.length(), t.length()); i++)
        if (s[i] != t[i]) break;
        
    int minOps = (s.length() - i + t.length() - i);
    int ops = minOps;

    while (ops < k) {
        if (i-- > 0)
            ops += 2;
        else
            ops++;
    }

    ops == k ? cout << "Yes" : cout << "No";

    return 0;
}
