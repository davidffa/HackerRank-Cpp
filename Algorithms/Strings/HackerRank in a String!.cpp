#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;
	char arr[10] = { 'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k' };

	int i=0;
	for (char c : s) {
		if (c == arr[i]) {
			i++;
		}
		if (i == 10) break;
	}

	if (i == 10) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
	return 0;
}
