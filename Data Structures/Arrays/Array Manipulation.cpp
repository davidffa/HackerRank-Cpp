#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
   	ll ans=0, sum=0;
	cin >> n >> m;
	vector<ll> v(n, 0);

	while (m--) {
		int a, b;
		ll k;
		cin >> a >> b >> k;

		v[a-1] += k;
		if (b < n)
			v[b] -= k;
	}

	for (int i=0; i<n; i++) {
		sum += v[i];
		ans = max(sum, ans);	
	}

	cout << ans;

	return 0;
}
