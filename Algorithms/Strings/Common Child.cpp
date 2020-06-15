#include <bits/stdc++.h>

using namespace std;

int main() {
	string s1, s2;
	int len;
	cin >> s1 >> s2;
	len = s1.length();
	vector<vector<int>> grid(len, vector<int>(len, 0));

	for (int i=0; i<len; i++) {
		for (int j=0; j<len; j++) {
			if (s1[i] == s2[j]) {
				if (i != 0 && j != 0)
					grid[i][j] = grid[i-1][j-1] + 1;
				else if (i != 0)
				   	grid[i][j] = grid[i-1][j] + 1;
				else if (j != 0)
					grid[i][j] = grid[i][j-1] + 1;
				else
					grid[i][j] = 1;
			}else {
				if (i != 0 && j != 0) {
					grid[i][j] = max(grid[i][j-1], grid[i-1][j]);
				}else if (i != 0) {
					grid[i][j] = grid[i-1][j];
				}else if (j != 0) {
					grid[i][j] = grid[i][j-1];
				}
			}
		}
	}

	cout << grid[len-1][len-1];

	return 0;
}
