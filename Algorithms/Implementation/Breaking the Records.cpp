#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, hScore, lScore, hScoreCount = 0, lScoreCount = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if (i == 0) {
            lScore = input;
            hScore = input;
            continue;
        }

        if (input > hScore) {
            hScore = input;
            hScoreCount++;
        }else if (input < lScore) {
            lScore = input;
            lScoreCount++;
        }
    }

    cout << hScoreCount << " " << lScoreCount;

    return 0;
}
