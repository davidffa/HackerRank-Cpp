#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, d, m, s, count = 0;
    cin >> p >> d >> m >> s;

    while (s >= p) {
        s -= p;
        if (p-d >= m) p -= d;
        else p = m;
        count++;
    }

    cout << count;

	return 0;
}
