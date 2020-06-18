#include <bits/stdc++.h>

using namespace std;

struct Pos {
    int x, y;
};

int main() {
    int n, k;
    Pos q;

    cin >> n >> k >> q.y >> q.x;

    int up = n-q.y, down = q.y-1, left = q.x-1, right = n-q.x;
    int upRight, upLeft, downRight, downLeft;

    up >= left ? upLeft = left : upLeft = up;
    down >= left ? downLeft = left : downLeft = down;
    up >= right ? upRight = right : upRight = up;
    down >= right ? downRight = right : downRight = down;

    int mU = 0, mD = 0, mL = 0, mR = 0, mUR = 0, mUL = 0, mDR = 0, mDL = 0;

    while (k--) {
        Pos o;
        cin >> o.y >> o.x;

        if (o.x == q.x) { // VERTICAL
            if (o.y > q.y) { // UP
                if (n-o.y+1 > mU) mU = n-o.y+1;
            }else { // DOWN
                if (o.y > mD) mD = o.y;
            }
        }else if (o.y == q.y) { // HORIZONTAL
            if (o.x > q.x) { // RIGHT
                if (n-o.x+1 > mR) mR = n-o.x+1;
            }else { // LEFT
                if (o.x > mL) mL = o.x;
            }
        }else if (((o.x > q.x && o.y > q.y) || (o.x < q.x && o.y < q.y)) && abs(o.x - q.x) == abs(o.y - q.y)) { // DIAGONAL RIGHT
            if (o.x > q.x) { // upRight
                if (upRight == up && n-o.y > mUR) mUR = n-o.y+1;
                else if (upRight == right && n-o.x > mUR) mUR = n-o.x+1; 
            }else { //downLeft
                if (downLeft == down && o.y > mDL) mDL = o.y;
                else if (downLeft == left && o.x > mDL) mDL = o.x;
            }
        }else if (((o.x < q.x && o.y > q.y) || (o.x > q.x && o.y < q.y)) && abs(o.x - q.x) == abs(o.y - q.y)) { // DIAGONAL LEFT
            if (o.x < q.x) { // upLeft
                if (upLeft == up && n-o.y > mUL) mUL = n-o.y + 1;
                else if (upLeft == left && o.x+1 > mUL) mUL = o.x;
            }else { // downRight
                if (downRight == down && o.y > mDR) mDR = o.y;
                else if (downRight == right && n-o.x+1 > mDR) mDR = n-o.x+1;
            }
        }
    }

    up -= mU, down -= mD, left -= mL, right -= mR, upRight -= mUR, upLeft -= mUL, downRight -= mDR, downLeft -= mDL;
    int positions = up+down+left+right+upRight+upLeft+downRight+downLeft;

    cout << positions;

    return 0;
}
