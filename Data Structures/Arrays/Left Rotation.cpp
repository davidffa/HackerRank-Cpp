#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, r;
	cin >> n >> r;
	vector<int> arr(n);

	for (int i=0; i<n; i++)
		cin >> arr[i];

	rotate(arr.begin(), arr.begin()+r, arr.end());

	for (int i=0; i<n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}
