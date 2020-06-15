#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;

    pair<int, int> sol = { -1, -1 };
    
    for (int j = s.length() - 1; j >= 0; j--) 
        for (int i = j; i >= 0; i--) 
            if (s[i] < s[j] && i > sol.first) sol = { i, j };

    if (sol.first == sol.second)
        cout << "no answer" << "\n";
    else {
        swap(s[sol.first], s[sol.second]);
        sort(s.begin() + sol.first + 1, s.end(), less<int>());
        cout << s << "\n";
    }
    
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
	return 0;
}
