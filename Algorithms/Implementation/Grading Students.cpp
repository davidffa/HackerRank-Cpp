#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int grade;
        cin >> grade;

        if (grade % 5 > 2 && (grade % 5) + grade > 40) {
            grade += 5 - (grade % 5);
        }

        cout << grade << "\n";
    }
    
    return 0;
}
