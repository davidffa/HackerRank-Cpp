#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++)
        cin >> arr[i];

    for (int i=0; i<n; i++) {
        if (arr[i] % 2 != 0 && i != n-1) {
            arr[i]++;
            arr[i+1]++;
            ans += 2;
        }
    }

    if (arr[n-1] % 2 == 0) cout << ans;
    else cout << "NO"; 

	return 0;
}
