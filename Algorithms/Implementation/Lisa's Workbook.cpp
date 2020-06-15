#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, p = 0, s = 0, c;
    cin >> n >> k;
    int arr[n];

    for (int i=0; i<n; i++)
        cin >> arr[i];

    for (int i=0; i<n; i++) {
        c = 0;
        while (arr[i] > 0) {
            ++p;
            int k1;
            arr[i] - k >= 0 ? k1 = k : k1 = abs(arr[i]);
            c += k1;
            if (c-k1 < p && c >= p) s++;
            arr[i] - k >= 0 ? arr[i] -= k : arr[i] = 0;  
        }
    }

    cout << s;

	return 0;
}
