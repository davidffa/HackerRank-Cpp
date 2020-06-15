#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    while (arr[n-1] != 0) {
        int lengthOfCut = arr[0], sticksCut = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                continue;
            }else {
                lengthOfCut = arr[i];
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] - lengthOfCut < 0) {
                arr[i] = 0;
            }
            else {
                arr[i] -= lengthOfCut;
                sticksCut++;
            }
        }
        
        cout << sticksCut << "\n";
    }
    
    return 0;
}
