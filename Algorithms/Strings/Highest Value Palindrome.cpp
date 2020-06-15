#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int n, len, len1, idx=0;
	map<int, bool> mp;
	cin >> len >> n >> s;

	if (n >= len) {
		while (len--) {
			cout << 9;
		}
		return 0;
	}

	len % 2 == 0 ? len1 = len/2 : len1 = len/2+1;

	for (int i=0; i<len1; i++) {
		if (s[i] != s[len-i-1]) {
			if (!n) {
				cout << -1;
				return 0;
			}
			s[i] > s[len-i-1] ? s[len-i-1] = s[i] : s[i] = s[len-i-1];
			mp[i] = 1;
			n--;
		}
	}

	while (n--) {
		for (int i=idx; i<len1; i++) {
			if (s[i]-'0' == 9) {
				idx++;
				continue;
			}
			if (i == len1-1 && len%2!=0) {
				s[i] = '9';
				break;
			}else if (mp[i]) {
				s[i] = '9';
				s[len-i-1] = '9';
				break;
			}else {
				if (n != 0) {
					s[i] = '9';
					s[len-i-1] = '9';
					n--;
					break;
				}
			}
			idx++;
		}
	}	

	cout << s;

	return 0;
}
