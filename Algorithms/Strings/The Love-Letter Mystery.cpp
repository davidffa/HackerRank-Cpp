#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s, rs;
	int ans=0;
	cin >> s;

	for (int i=0; i<s.length()/2; i++) {
		if (s[i] == s[s.length()-i-1]) continue;
		else if (s[i] > s[s.length()-i-1]) {
			ans += s[i] - s[s.length()-i-1];
		}else {
			ans += s[s.length()-i-1] - s[i];
		}
	}

	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	while (n--) {
		solve();
	}
	return 0;
}
