#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> arr;

	for (int i=0; i<n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}	
	sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
		return a.length() < b.length() || a.length() == b.length() && a < b;
	});

	for (int i=0; i<n; i++)
		cout << arr[i] << "\n";
	return 0;
}
