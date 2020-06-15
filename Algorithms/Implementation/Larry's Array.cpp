#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, x=0;
	cin >> n;
	int arr[n];
	
	for (int i=0; i<n; i++)
		cin >> arr[i];

	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (arr[i] > arr[j]) x++;
		}
	}

	if (x % 2 == 0) cout << "YES" << "\n";
	else cout << "NO" << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}
