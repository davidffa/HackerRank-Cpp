#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    k %= n;
    rotate(arr.begin(), arr.end()-k, arr.end());

    while (q--) {
        int index;
        cin >> index;
        cout << arr[index] << "\n";
    }

    return 0;
}
