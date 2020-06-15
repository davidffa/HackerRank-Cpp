#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t, lastAns=0;
	cin >> n >> t;
	vector<ll> v[n];

	while (t--) {
		int q;
	   	ll x, y;
		cin >> q >> x >> y;
		int seq = (x^lastAns) % n;
		
		if (q == 1) {
			v[seq].push_back(y);
		}else {
			lastAns = v[seq][y % v[seq].size()];
			cout << lastAns << "\n";
		}
	}

	return 0;
}
