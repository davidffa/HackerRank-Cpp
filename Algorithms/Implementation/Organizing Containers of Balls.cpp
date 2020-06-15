#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve() {
    int n;
    cin >> n;
    ll matrix[n][n];
    int sum[n]={0}, row[n]={0};
    bool possible = 1;

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) {
            cin >> matrix[i][j];
            sum[j] += matrix[i][j];
            row[i] += matrix[i][j];
        }

    sort(row, row+n);
    sort(sum, sum+n);

    for (int i=0; i<n; i++)
        if (row[i] != sum[i]) {
            possible = 0;
            break;
        }

    if (possible) cout << "Possible\n";
    else cout << "Impossible\n";
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
