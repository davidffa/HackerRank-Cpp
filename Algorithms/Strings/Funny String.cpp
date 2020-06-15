#include <bits/stdc++.h>

using namespace std;

void reverse(string& s) {
	for (int i=0; i<s.length()/2; i++)
		swap(s[i], s[s.length()-i-1]);
}

void solve() {
	string s;
	cin >> s;
	int s1[s.length()], s2[s.length()], d1[s.length()-1], d2[s.length()-1];

	for (int i=0; i<s.length(); i++) {
		s1[i] = s[i];
		if (i != 0) {
			d1[i-1] = abs(s1[i-1] - s1[i]);
		}
	}

	reverse(s);

	for (int i=0; i<s.length(); i++) {
		s2[i] = s[i];
		if (i != 0) {
			d2[i-1] = abs(s2[i-1] - s2[i]);
		}
	}

	for (int i=0; i<s.length()-1; i++) {
		if (d1[i] != d2[i]) {
			cout << "Not Funny\n";
			return;
		}
	}

	cout << "Funny\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}
