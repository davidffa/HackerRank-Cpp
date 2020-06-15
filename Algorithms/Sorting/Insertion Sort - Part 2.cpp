#include <bits/stdc++.h>

using namespace std;

int n;

void printArr(int arr[]) {
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main() {
	cin >> n;
	int arr[n];

	for (int i=0; i<n; i++)
		cin >> arr[i];

	for (int i=1; i<n; i++) {
		int temp = arr[i];
		for (int j=i; j>=0; j--) {
			if (temp < arr[j-1]) {
				arr[j] = arr[j-1];
			}else {
				arr[j] = temp;
				break;
			}
		}
		printArr(arr);
	}

	return 0;
}
