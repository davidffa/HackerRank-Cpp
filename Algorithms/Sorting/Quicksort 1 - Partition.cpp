#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, p;
	cin >> n;
	int arr[n];

	for (int i=0; i<n; i++)
		cin >> arr[i];
	p = arr[0];
	
	for (int i=0; i<n; i++)
		if (arr[i] < p) cout << arr[i] << " ";

	cout << p << " ";

	for (int i=0; i<n; i++)
		if (arr[i] > p) cout << arr[i] << " ";
		
	return 0;
}
