#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double p = 0, z = 0, negative = 0;
    cin >> n;

    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        if (x > 0) p++;
        else if (x < 0) negative++;
        else z++;
    }

    cout << setprecision(6) << fixed;
    cout << p/n << "\n" << negative/n << "\n" << z/n << "\n";

	return 0;
}
