#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if (input == 1) t1++;
        else if (input == 2) t2++;
        else if (input == 3) t3++;
        else if (input == 4) t4++;
        else t5++;
    }

    int maxFreq = t1, maxVal = 1;

    if (t5 >= maxFreq) {
        maxFreq = t5;
        maxVal = 5;
    }
    if (t4 >= maxFreq) {
        maxFreq = t4;
        maxVal = 4;
    }
    if (t3 >= maxFreq) {
        maxFreq = t3;
        maxVal = 3;
    }
    if (t2 >= maxFreq) {
        maxVal = 2;
    }

    cout << maxVal;

    return 0;
}

