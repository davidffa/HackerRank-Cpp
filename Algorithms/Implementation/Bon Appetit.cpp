#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, bCharged, sum = 0, refound;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
        

    cin >> bCharged;

    int bActual = (sum - arr[k]) / 2;
    refound = bCharged - bActual;

    refound != 0 ? cout << refound : cout << "Bon Appetit";

    return 0;
}
