#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s1, s2;
	cin >> s1 >> s2;
	bool arr[26+26]={0}, ok=0;

	for (char c : s1) {
		arr[c-'a']=1;
	}

	for (char c : s2) {
		arr[c-'a'+26]=1;
	}

	for (int i=0; i<26; i++) {
		if (arr[i] && arr[i+26]) {
			ok=1;
			break;
		}
	}

	if (ok) cout << "YES\n";
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
