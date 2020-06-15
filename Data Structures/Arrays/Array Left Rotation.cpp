#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, d;
	vector<int> arr;
	cin >> n >> d;

	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	d %= n;

	rotate(arr.begin(), arr.begin()+d, arr.end());

	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
