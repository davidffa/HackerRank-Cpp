#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[26], maxHeight = 0;
    string s;
    
    for (int i = 0; i < 26; i++)
        cin >> arr[i];

    cin >> s;

    for (char c : s) {
        if (arr[c-'a'] > maxHeight) maxHeight = arr[c-'a'];
    }

    cout << s.length() * maxHeight;

    return 0;
}
