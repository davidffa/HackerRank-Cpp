#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    while (x1 < x2) {
        x1 += v1;
        x2 += v2;
    }

    x1 == x2 ? cout << "YES" : cout << "NO";

    return 0;
}
