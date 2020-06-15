#include <bits/stdc++.h>

using namespace std;

void solveJYear(int y) {
    if (y % 4 == 0) cout << "12.09." + to_string(y);
    else cout << "13.09." + to_string(y);
}

void solveGYear(int y) {
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) cout << "12.09." + to_string(y);
    else cout << "13.09." + to_string(y);
}

int main() {
    int y;
    cin >> y;

    if (y < 1918) solveJYear(y);
    else if (y > 1918) solveGYear(y);
    else cout << "26.09.1918";

    return 0;
}

