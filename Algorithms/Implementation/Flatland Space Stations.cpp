#include <bits/stdc++.h>

using namespace std;

int getMax(int l, int r) {
    int ans = 0;
    if (r - l == 1) return 0;
    for (int i=l+1; i<r; i++)
        ans = max(ans, min(i-l, r-i));
    return ans;
}

int main() {
    int n, m, l = 0, r = 0;
    cin >> n >> m;
    int arr[m];

    for (int i=0; i<m; i++)
        cin >> arr[i];

    sort(arr, arr+m);
    int ans = arr[0];

    for (int i=1; i<m; i++) {
        l = arr[i-1];
        r = arr[i];
        ans = max(ans, getMax(l, r));
    }

    cout << max(ans, n-arr[m-1]-1);

	return 0;
}
