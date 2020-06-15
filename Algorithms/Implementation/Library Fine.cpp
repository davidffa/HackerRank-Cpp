#include <bits/stdc++.h>

using namespace std;

int main() {
    int d1, m1, y1, d2, m2, y2, fine;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;

    if (y1 == y2 && m1 == m2 && d1 > d2) {
        fine = 15 *(d1-d2);
    }else if (y1 == y2 && m1 > m2) {
        fine = 500 * (m1-m2);
    }else if (y1 > y2) {
        fine = 10000; 
    }else {
        fine = 0;
    }

    cout << fine;

    return 0;
}
