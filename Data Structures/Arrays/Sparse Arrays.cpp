#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, q;
	cin >> n;
	vector<string> v(n);

	for (int i=0; i<n; i++)
		cin >> v[i];

	cin >> q;

	while (q--) {
		int ans=0;
		string s;
		cin >> s;

		for (string s1 : v) {
			if (s == s1) ans++;
		}

		cout << ans << "\n";
	}

	return 0;
}
