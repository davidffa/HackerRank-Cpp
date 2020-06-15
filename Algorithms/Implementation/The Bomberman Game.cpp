#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int mxN = 200;
char grid[mxN][mxN];
char temp[mxN][mxN];
int r, c;
ll n;

int get(int i, int j) {
    if (0 <= i && i < r && 0 <= j && j < c)
        return grid[i][j];
    else
        return '.';
}

int main() {
    cin >> r >> c >> n;

    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            cin >> grid[i][j];

    if (n == 1) {
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++)
                cout << grid[i][j];
            cout << "\n";
        }
        return 0;
    }

    if (n % 2 == 0) {
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++) {
                cout << 'O';
            }
            cout << "\n";
        }
    }else {
        for (int i=1; i < n%4+4; i+=2) {
            for (int j=0; j<r; j++) {
                for (int k=0; k<c; k++) {
                    if (get(j, k) == 'O' || get(j, k-1) == 'O' || get(j, k+1) == 'O' || get(j-1, k) == 'O' || get(j+1, k) == 'O') {
                        temp[j][k] = '.';
                    }else temp[j][k] = 'O';
                }
            }
            for (int j=0; j<r; j++) {
                for (int k=0; k<c; k++) {
                    grid[j][k] = temp[j][k];
                }
            }
        }
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++)
                cout << grid[i][j];
            cout << "\n";
        }
    }

    
	return 0;
}
