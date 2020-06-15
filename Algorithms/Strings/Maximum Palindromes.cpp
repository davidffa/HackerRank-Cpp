#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 100001;
const int A = 'z' - 'a' + 1;
const ll MOD = (ll) 1e9 + 7;

ll fact[N], rfact[N];

int n, t;
char s[N];
int cnt[N][A];

ll pwr(ll x, ll y) {
	if (y == 0) return 1;

	if (y & 1) return pwr(x, y-1) * x % MOD;
	else {
		ll temp = pwr(x, y/2);
		return temp * temp % MOD;
	}
}

void solve() {
	int l, r, sum=0, odd=0;
	ll ans=1;
	cin >> l >> r;

	for (int i=0; i<A; i++) {
		int cur = cnt[r][i] - cnt[l-1][i];
		sum += cur/2;
		ans = ans * rfact[cur / 2] % MOD;
		if (cur % 2 == 1) odd++;
	}
	ans = ans * max(1, odd) % MOD;
	ans = ans * fact[sum] % MOD;
	
	cout << ans << "\n";
}



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	fact[0] = 1;
	rfact[0] = 1;

	for (int i=1; i<N; i++) {
		fact[i] = fact[i-1]*i%MOD;
		rfact[i] = pwr(fact[i], MOD - 2);
	}

	memset(cnt, 0, sizeof(cnt));

	cin >> s >> t;
	n = strlen(s);

	for (int i=0; i<n; i++) {
		cnt[i+1][s[i]-'a']++;
	}

	for (int i=0; i<=n; i++) {
		for (int j=0; j<A; j++) {
			cnt[i][j] += cnt[i-1][j];
		}
	}

	while (t--) {
		solve(); 
	}
	return 0;
}
