#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n, m, place = 1;
    cin >> n;
    int n1 = n;
    vector<ll> scores;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if (i != 0 && scores[i-(n-n1)-1] == input) {
            n1--;
        }else scores.push_back(input);
    } 

    sort(scores.begin(), scores.end());

    cin >> m;

    int curr = 0;
    for (int i = 0; i < m; i++) {
        int rank;
        cin >> rank;
        
        for (int j = curr; j < scores.size(); j++) {
            if (rank < scores[j]) {
                cout << scores.size() - j + 1 << "\n";
                curr = j;
                break;
            }
            if ((rank >= scores[j] && rank < scores[j+1]) || j+1 == scores.size()) {
                //cout << "Rank: " << rank << "Scores: " << scores[j] << "\n";
                cout << scores.size() - j << "\n";
                curr = j;
                break;
            }
        }
    }   

    return 0;
}
