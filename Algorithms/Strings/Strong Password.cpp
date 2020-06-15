#include <bits/stdc++.h>

using namespace std;

int main() {
	int sum, len, digit = 1, lower = 1, upper = 1, spec = 1;
	string s;
	cin >> len >> s;

	for (char c : s) {
		if (isdigit(c)) digit = 0;
		else if (islower(c)) lower = 0;
		else if (isupper(c)) upper = 0;
		else spec = 0;
	}

	sum = digit+lower+upper+spec;

	if (len >= 6) {
		cout << sum;
	}else {
		cout << max(6-len, sum);
	}

	return 0;
}
