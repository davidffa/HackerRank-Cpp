#include <bits/stdc++.h>

using namespace std;

int main() {
	int ans=0;
	int a[26] = {0};
	string s1, s2;
	cin >> s1 >> s2;
	
	for (int i=0; i<s1.length(); i++)
		a[s1[i]-'a']++;

	for (int i=0; i<s2.length(); i++)
		a[s2[i]-'a']--;

	for (int i=0; i<26; i++)
		ans+=abs(a[i]);

	cout << ans;

	return 0;
}
