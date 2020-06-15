#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int len=0;
	map<char, int> mp;
	bool fail=0;
	cin >> s;

	for (char c : s) ++mp[c];

	for (auto p : mp) {
		if (len == 0) {
			len = p.second;
		}else if (len != p.second) {
			if (!fail) {
				fail = 1;
				continue;
			}else {
				cout << "NO";
				return 0;
			}
		}
	}

	cout << "YES";
	return 0;
}
