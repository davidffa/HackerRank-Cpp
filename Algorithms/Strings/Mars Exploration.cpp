#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int count = 0;
	cin >> s;

	for (int i=0; i<s.length(); i++) {
		int j;
		i+1 > 3 ? j = i % 3 + 1 : j = i+1;
		cout << j << "\n";
		if (((j == 1 || j == 3) && s[i] != 'S') || (j == 2 && s[i] != 'O'))
			count++;
	}
	
	cout << count;
	return 0;
}
