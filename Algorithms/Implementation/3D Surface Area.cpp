#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w, area;
    cin >> h >> w;
    int matrix[h][w];

    for (int i=0; i<h; i++)
        for (int j=0; j<w; j++)
            cin >> matrix[i][j];

    area = 2*h*w;

    for (int i=0; i<h; i++) {
        area += matrix[i][0];
        for (int j=1; j<w; j++) 
            area += abs(matrix[i][j] - matrix[i][j-1]);
        area += matrix[i][w-1];
    }

    for (int i=0; i<w; i++) {
        area += matrix[0][i];
        for (int j=1; j<h; j++)
            area += abs(matrix[j][i] - matrix[j-1][i]);
        area += matrix[h-1][i];
    }

    cout << area;

	return 0;
}
