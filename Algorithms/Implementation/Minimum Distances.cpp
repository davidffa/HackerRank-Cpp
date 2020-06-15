#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, minDist = -1;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++)
        cin >> arr[i];

    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++) {
            if (arr[i] == arr[j] && (abs(i-j) < minDist || minDist == -1)) {
                minDist = abs(i-j);
            }
        }

    cout << minDist;

	return 0;
}
