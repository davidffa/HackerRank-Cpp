#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll sum = 0;
    int n;
    cin >> n;

    while (n--) {
        ll x;
        cin >> x;
        sum += x;
    }

    cout << sum << "\n";

	return 0;
}
