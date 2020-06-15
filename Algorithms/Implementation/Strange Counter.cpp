#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll t, p = 3;
    cin >> t;

    while (t > p) {
        t -= p;
        p *= 2;
    }

    cout << p-t+1;

	return 0;
}
