#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;
	int len = s.length();
	map<char, int> mp1, mp2;

	if (len % 2 == 0) {
		int ans=0;
		string s1 = s.substr(0, len/2), s2 = s.substr(len/2, len-1);
		for (char c : s1) ++mp1[c];
		for (char c : s2) ++mp2[c];

		for (int i=0; i<len/2; i++) {
			bool ok=0;
			for (int j=0; j<len/2&&!ok; j++) {
				if (s1[i] == s2[j]) {
					if (mp1[s1[i]] != 0 && mp2[s2[j]] != 0) {
						ok=1;
						--mp1[s1[i]], -- mp2[s2[j]];
					}
				}
			}
			if (!ok) ans++;
		}

		cout << ans << "\n";
	}else {
		cout << -1 << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		solve();
	}
	return 0;
}
