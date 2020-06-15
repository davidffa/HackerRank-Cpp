#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d, count = 0;
    cin >> n >> d;
    int arr[n];

    for (int i=0; i<n; i++)
        cin >> arr[i];

    for (int i=0; i<n; i++)
        for (int j=i; j<n; j++) 
            if (arr[j] - arr[i] == d)
                for (int k=j; k<n; k++)
                    if (arr[k]-arr[j] == d) count++;
        

    cout << count;

	return 0;
}
