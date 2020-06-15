#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
	int m, n;
	ll r;
	cin >> m >> n >> r;
	ll matrix[m][n];
	int l = min(m, n) / 2;

	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			cin >> matrix[i][j];

	for (int i=0; i<l; i++) {
		int r1 = r % (2* (m + n - 4*i) - 4);

		for (int rotation=0; rotation<r1; rotation++) {
			for (int j=i; j<n-i-1; j++) {
				int temp = matrix[i][j];
				matrix[i][j] = matrix[i][j+1];
				matrix[i][j+1] = temp;
			}

			for (int j=i; j<m-i-1; j++) {
				int temp = matrix[j][n-i-1];
				matrix[j][n-i-1] = matrix[j+1][n-i-1];
				matrix[j+1][n-i-1] = temp;
			}

			for (int j=n-i-1; j>i; j--) {
				int temp = matrix[m-i-1][j];
				matrix[m-i-1][j] = matrix[m-i-1][j-1];
				matrix[m-i-1][j-1] = temp;
			}

			for (int j=m-i-1; j>i+1; j--) {
				int temp = matrix[j][i];
				matrix[j][i] = matrix[j-1][i];
				matrix[j-1][i] = temp;
			}
		}
	}

	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++)
			cout << matrix[i][j] << " ";
		cout << "\n";
	}

	return 0;
}
