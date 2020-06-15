#include <bits/stdc++.h>

#define ll long long

using namespace std;

int reversed(int n) {
    int reversedNum = 0, remainder = 0;

    while (n != 0) {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }

    return reversedNum;
}

int main() {
    int i, j, k, count = 0;
    cin >> i >> j >> k;

    for (i; i <= j; i++)
        if (abs(i - reversed(i)) % k == 0) count++;

    cout << count;

    return 0;
}
