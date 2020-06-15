#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int rows, collumns;

    cin >> s;

    rows = floor(sqrt(s.length()));
    collumns = ceil(sqrt(s.length()));

    if (rows * collumns < s.length()) rows = collumns;

    string sep = "";

    for (int i=0; i<collumns; i++) {
        string word = "";
        int index = i;
        while (index < s.length()) {
            word += s[index];
            index += collumns;
        }
        cout << sep << word;
        sep = " ";
    }

	return 0;
}
