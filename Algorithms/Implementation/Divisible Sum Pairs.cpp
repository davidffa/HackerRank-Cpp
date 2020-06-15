#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) 
        for (int j = i; j < n; j++) 
            if (i < j && (arr[i] + arr[j]) % k == 0) count++;

    cout << count;

    return 0;
}

