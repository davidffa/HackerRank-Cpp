#include <bits/stdc++.h>

using namespace std;

int main() {
	set<char> chars;
	string s;
	
	while (cin >> s) {
		for (char c : s) {
			chars.insert(tolower(c));
		}
	}
	
	if (chars.size() == 26) cout << "pangram";
	else cout << "not pangram";

	return 0;
}
