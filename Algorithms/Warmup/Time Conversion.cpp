#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, ans;
    cin >> s;

    if (s.substr(8, 8) == "AM") {
        if (s.substr(0, 2) == "12") {
            ans += "00";
        }else {
            ans += s.substr(0, 2);
        }
    }else {
        if (s.substr(0, 2) == "12") {
            ans += "12";
        }else {
            int hour = stoi(s.substr(0, 2));
            hour += 12;
            ans += to_string(hour);
        }
    }

    ans += s.substr(2, 6);

    cout << ans << "\n";

	return 0;
}
