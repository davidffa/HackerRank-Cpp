#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    string s;
    ll n, ans, a = 0;

    cin >> s >> n;

    for (char c : s) {
        if (c == 'a') a++;
    }

    ans = n/s.length() * a;

    for (int i = 0; i < n % s.length(); i++)
        if (s[i] == 'a') ans++;

    cout << ans;

    return 0;
}
