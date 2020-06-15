#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, t, a, b, m, n, apple = 0, orange = 0;
    cin >> s >> t >> a >> b >> m >> n;
    int apples[m], oranges[n];

    for (int i = 0; i < m; i++) {
        cin >> apples[i];
        if (apples[i] <= 0) continue;
        if (a + apples[i] >= s && a + apples[i] <= t) apple++;
    }
        

    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
        if (oranges[i] >= 0) continue;
        if (b + oranges[i] >= s && b + oranges[i] <= t) orange++;
    }

    cout << apple << "\n" << orange;

    return 0;
}

