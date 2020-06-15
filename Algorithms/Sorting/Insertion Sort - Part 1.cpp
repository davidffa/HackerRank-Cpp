#include <bits/stdc++.h>

using namespace std;

int n;

void printArr(int arr[]) {
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main() {
	int temp;
	cin >> n;
	int arr[n];

	for (int i=0; i<n; i++)
		cin >> arr[i];

	temp = arr[n-1];

	for (int i=n-1; i >= 0; i--) {
		if (arr[i-1] < temp) {
			arr[i] = temp;
			printArr(arr);
			break;
		}else {
			arr[i] = arr[i-1];		
		}
		printArr(arr);
	}
	return 0;
}
