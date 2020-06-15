#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, jumps = 0;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++)
        cin >> arr[i];

    for (int i=0; i<n; i++) {
        if (i+2 <= n) {
            if (arr[i+2] == 0) i++;
        }
        jumps++;
    }
    
    cout << jumps-1 << "\n";

	return 0;
}
