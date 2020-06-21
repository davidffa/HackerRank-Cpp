#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e6 + 5;
char sl[mxN];
const char W[5] = "ACTG";
int n, cnt[4];

bool ok() {
	for (int i=0; i<4; i++) {
		if (cnt[i] > n/4) 
			return false;
	}
	return true;
}

int f(int i) {
	for (int j=0; j<4; j++) {
		if (sl[i] == W[j])
			return j;
	}
	assert(false);
}

int main() {
	cin >> n >> sl;

	for (int i=0; i<n; i++)
		cnt[f(i)]++;
	if (ok()) {
		puts("0");
		return 0;
	}
	int ans=n;
	int j=0;

	for (int i=0; i<n; i++) {
		while (j<n && !ok())
			--cnt[f(j++)];
		if (ok()) ans = min(ans, j-i);
		++cnt[f(i)];
	}
	cout << ans;

	return 0;
}
