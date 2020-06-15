#include <bits/stdc++.h>

using namespace std;

int main() {
    int seeLevel = 0, valleys = 0, n;
    string s;
    bool down = 0;
    cin >> n >> s;

    for (char c : s) {
        if (c == 'U') {
            seeLevel++;
            if (seeLevel >= 0 && down) {
                down = false;
                valleys++;
            }
        }else {
            seeLevel--;
            if (seeLevel < 0 && !down) down = true;
        }
    }

    cout << valleys;
    
    return 0;
}
