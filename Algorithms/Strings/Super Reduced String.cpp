#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;
	bool emp = 0;

	for (int i=0; i<s.length()-1; i++) {
		if (s[i] == s[i+1]) {
			s.erase(s.begin()+i);
			s.erase(s.begin()+i);

			if (s.length() == 0) {
				emp = 1;
				break;
			}

			i = -1;
		}	
	}

	if (emp) cout << "Empty String";
	else cout << s;

	return 0;
}
