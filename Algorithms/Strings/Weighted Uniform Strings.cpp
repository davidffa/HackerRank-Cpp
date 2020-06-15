#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;

	set<int> values;
	for (int i=0, j; i<s.length(); i=j) {
		char last = s[i];
		int last_w = 0;

		for (j=i; j<s.length() && s[j] == last; j++) {
			last_w += last-'a'+1;
			values.insert(last_w);
		}
	}

	int q, temp;
	cin >> q;

	while (q--) {
		cin >> temp;
		cout << (values.find(temp) == values.end() ? "No\n" : "Yes\n");
	}
}
