#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> arr;

    for (int i=0; i<n; i++) {
        string x;
        cin >> x;
        arr.push_back(x);
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i == 0 || j == 0 || j == n-1 || i == n-1) {
                cout << arr[i][j];
                continue;
            }
            if (arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i][j+1] && arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i][j-1]) cout << 'X';
            else cout << arr[i][j];
        }
        cout << "\n";
    }

	return 0;
}
