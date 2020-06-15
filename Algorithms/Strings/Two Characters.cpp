#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, ans = 0;
	string s;
	cin >> n >> s;

	for (int i=0; i<26; i++) {
		for (int j=0; j<26; j++) {
			if (i == j) continue;
			int p1 = i, p2 = j, flag = 1, l = 0;
			for (char c : s) {
				if (c-'a' != p1 && c-'a' != p2) continue;
			   	if (c-'a' == p1) {
					l++;
					swap(p1, p2);
				}else {
					flag = 0;
				}
			}
			if (flag == 1 && l>1) ans = max(ans, l);
		}
	}

	cout << ans;

	return 0;
}
