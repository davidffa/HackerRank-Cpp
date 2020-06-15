#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, pD = 0, sD = 0;
    cin >> n;
    int matrix[n][n];

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> matrix[i][j];

    for (int i=0; i<n; i++) {
        pD += matrix[i][i];
        sD += matrix[n-1-i][i];
    }

    cout << abs(pD - sD) << "\n";

	return 0;
}
