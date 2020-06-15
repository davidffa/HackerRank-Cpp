#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	bool odd=0;
	map<char, int> mp;

	for (char c : s) ++mp[c];

	for (auto p : mp) {
		if (p.second % 2 != 0) {
			if (!odd) odd=1;
			else {
				cout << "NO\n";
				return 0;
			}
		}
	}

	cout << "YES\n";
	

	return 0;
}
