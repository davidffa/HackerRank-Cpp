#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	int count=0;
	bool arr[26]={0};
	cin >> s;

	for (char c : s) {
		if (!arr[c-'a']) {
			arr[c-'a'] = 1;
			count++;
		}
	}
	cout << count << "\n";
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
