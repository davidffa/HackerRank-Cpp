#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	string s, e = "";

	cin >> n >> s >> k;


	for (char c : s) {
		if (islower(c)) {
			e += ((c - 'a' + k) % 26) + 'a';
		}else if (isupper(c)) {
			e += ((c - 'A' + k) % 26) + 'A';
		}else e += c;
	}

	cout << e << "\n";
	return 0;
}
