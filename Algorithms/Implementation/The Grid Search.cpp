#include <bits/stdc++.h>

using namespace std;

void solve() {
    int R, C, r, c;
    cin >> R >> C;
    string grid[R];
    bool exists = 0;

    for (int i=0; i<R; i++)
        cin >> grid[i];

    cin >> r >> c;
    string pattern[r];

    for (int i=0; i<r; i++)
        cin >> pattern[i];

    for (int i=0; i<R-r+1; i++) {
        for (int j=0; j<C-c+1; j++) {
            if (grid[i][j] == pattern[0][0]) {
                bool m = 1;
                for (int k=0; k<r; k++) {
                    for (int x=0; x<c; x++) {
                        if (grid[i+k][j+x] != pattern[k][x]) {
                            m = 0;
                            break;
                        }
                    }
                    if (!m) break;
                }
                if (m) {
                    exists = 1;
                    break;
                }
            }
        }
    }

    if (exists) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
	return 0;
}
