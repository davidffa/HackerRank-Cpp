#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, n, m, ans = -1;
    cin >> b >> n >> m;
    int keyboard[n], drives[m];

    for (int i = 0; i < n; i++) 
        cin >> keyboard[i];

    for (int i = 0; i < m; i++)
        cin >> drives[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (keyboard[i] + drives[j] <= b && keyboard[i] + drives[j] > ans) 
                ans = keyboard[i] + drives[j];
        }
    }

    cout << ans;

    return 0;
}
