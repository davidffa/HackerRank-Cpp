#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[1000000];
	memset(arr, 0, sizeof(arr));

	while(n--) {
		int x;
		cin >> x;

		arr[x]++;
	}

	for (int i=0; i<100; i++) {
		for (int j=0; j<arr[i]; j++) {
			cout << i << " ";
		}
	}
	return 0;
}
