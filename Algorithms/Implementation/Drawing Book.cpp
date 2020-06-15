#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;

    int totalPages = (n + 2) / 2, fromFront = (p + 2) / 2 - 1, fromBack = totalPages - fromFront-1;

    cout << min(fromFront, fromBack);

    return 0;
}

