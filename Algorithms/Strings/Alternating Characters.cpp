#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;
	int ans = 0;
	bool b=0;

	if (s[0] == 'B') b=1;

	for (char c : s) {
		if (c == 'A') {
			if (b) ans++;
			else b=1;
		}else {
			if (!b) ans++;
			else b=0;
		}
	}

	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}
