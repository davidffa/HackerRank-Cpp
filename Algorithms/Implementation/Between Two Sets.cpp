#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n >> m;
    int a[n], b[m];
    vector<int> factors;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = a[n-1]; i <= b[0]; i++) {
        for (int j = 0; j < n; j++) {
            if (i % a[j] != 0) break;
            if (j == n-1) factors.push_back(i);
        }
    }

    for (int i = 0; i < factors.size(); i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] % factors[i] != 0) break;
            if (j == m-1) count++;
        }
    }

    cout << count;

    return 0;
}
