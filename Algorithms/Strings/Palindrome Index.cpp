#include <bits/stdc++.h>

using namespace std;

bool ispalin(string s) {
	int i=0, j=s.length()-1;
	while (i<j) {
		if (s[i] != s[j]) return false;
		i++, j--;
	}
	return true;
}

void solve() {
	string s;
	cin >> s;
	int i=0, len=s.length(), j=len-1, ans=-1;
	
	while(i<j && s[i] == s[j]) i++, j--;

	if (i<j) {
		string s1 = s.substr(0, i) + s.substr(i+1, s.length() - i - 1);
		if (ispalin(s1)) ans = i;
		string s2 = s.substr(0, j) + s.substr(j+1, s.length() - j - 1);
		if (ispalin(s2)) ans = j;
	}
	cout << ans << "\n";
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
