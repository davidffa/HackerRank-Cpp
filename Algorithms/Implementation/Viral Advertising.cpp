#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, totalLikes = 0, people = 5;
    cin >> n;

    while (n--) {
        totalLikes += floor(people / 2);
        people = floor(people / 2) * 3;
    }

    cout << totalLikes;

    return 0;
}
