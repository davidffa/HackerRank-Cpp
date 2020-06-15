#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, x, y, z;
    cin >> t;

    while (t--) {
        cin >> x >> y >> z;

        int xz = abs(x-z);
        int yz = abs(y-z);

        if (xz == yz) cout << "Mouse C" << "\n";
        else if (xz < yz) cout << "Cat A" << "\n";
        else cout << "Cat B" << "\n";
    }

    return 0;
}
