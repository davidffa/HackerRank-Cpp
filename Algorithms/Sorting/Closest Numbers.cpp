#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, min=1e7;
	cin >> n;
	int arr[n];
	vector<int> ans;

	for (int i=0; i<n; i++)
		cin >> arr[i];

	sort(arr, arr+n);

	for (int i=1; i<n; i++) {
		if (abs(arr[i-1] - arr[i]) < min) {
			ans.clear();
			min = abs(arr[i-1] - arr[i]);
			ans.push_back(arr[i-1]);
			ans.push_back(arr[i]);
		}else if (abs(arr[i-1] - arr[i]) == min) {
			ans.push_back(arr[i-1]);
			ans.push_back(arr[i]);
		}
	}

	for (int i=0; i<ans.size(); i++)
		cout << ans[i] << " ";
	return 0;
}
