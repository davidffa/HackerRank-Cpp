#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll arr[5], maxSum = 0, minSum = 0;

    for (int i=0; i<5; i++)
        cin >> arr[i];

    sort(arr, arr+5);

    for (int i=0; i<4; i++)
        minSum += arr[i];

    maxSum = minSum - arr[0] + arr[4];

    cout << minSum << ' ' << maxSum;

	return 0;
}
