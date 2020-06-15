#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++) {
        int iIdx = 0, iValue = 0;
        for (int j = 0; j < n; j++) {
            if (i == arr[j]) {
                iIdx = j+1;
                break;
            }
        }
        for (int j = 0; j < n; j++) {
            if (iIdx == arr[j]) {
                iValue = j+1;
                break;
            }
        }
        cout << iValue << "\n";
    }

    return 0;
}
