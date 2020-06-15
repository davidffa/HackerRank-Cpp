#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, mx=0;
	cin >> n;
	map<int, vector<string>> mp;

	for (int i=0; i<n; i++) {
		int x;
		string s;
		cin >> x >> s;
		if (n/2 <= i) {
			mp[x].push_back(s);
		}else {
			mp[x].push_back("-");
		}
		mx = max(mx, x);
	}

	for (int i=0; i<=mx; i++) {
		for (int j=0; j<mp[i].size(); j++) {
			cout << mp[i][j] << " ";
		}
	}

	return 0;
}
