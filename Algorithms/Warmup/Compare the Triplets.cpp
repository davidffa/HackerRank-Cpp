#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[3], b[3], aScore = 0, bScore = 0;

    for (int i=0; i<3; i++)
        cin >> a[i];

    for (int i=0; i<3; i++)
        cin >> b[i];

    for (int i=0; i<3; i++) {
        if (a[i] > b[i]) aScore++;
        else if (a[i] < b[i]) bScore++;
    }

    cout << aScore << " " << bScore;

	return 0;
}
