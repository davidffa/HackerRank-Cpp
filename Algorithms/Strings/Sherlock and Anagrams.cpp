#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;
	int ans=0;

	map<vector<int>, int> mp;

	for (int i=1; i<=s.length(); i++) {
		for (int j=0; j<s.length()&&j+i<=s.length(); j++) {
			string s1= s.substr(j, i);
			vector<int> v(26, 0);

			for (char c : s1) ++v[c-'a'];
			++mp[v];
		}
	}

	for (auto p : mp) {
		ans += p.second*(p.second-1)/2;
	}
	
	cout << ans << "\n";
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
