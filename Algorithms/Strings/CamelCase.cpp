#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 1;
	string s;
	cin >> s;

	for (char c : s) {
		if (isupper(c)) n++;
	}

	cout << n;
	return 0;
}
