#include <bits/stdc++.h>

using namespace std;

void filter(string& s) {
	sort(s.begin(), s.end());

	auto res = unique(s.begin(), s.end());
	s = string(s.begin(), res);
}

int main() {
	int n, ans=0;
	cin >> n;
	map<char, int> mp;

	for (int i=0; i<n; i++) {
		string s;
		cin >> s;

		filter(s);

		for (char c : s) {
			++mp[c];
		}
	}

	for (auto p : mp) {
		if (p.second == n) ans++;
	}

	cout << ans;

	return 0;
}
