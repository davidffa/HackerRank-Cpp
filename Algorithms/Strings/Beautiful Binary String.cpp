#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, ans=0;
	string s;
	cin >> n >> s;

	for (int i=1; i<n; i++) {
		if (s[i-1] == '0' && s[i] == '1' && (i+1<n && s[i+1] == '0')) {
			i+=2;
			ans++;
		}
	}

	cout << ans;
	return 0;
}
