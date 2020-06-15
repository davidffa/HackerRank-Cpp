#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, maxTopics = 0, maxTeams = 0;
    vector<string> teams;

    cin >> n >> m;

    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        teams.push_back(s);
    }

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            int topics = 0;
            int topicList[m];
            memset(topicList, 0, sizeof(topicList));
            
            for (int k=0; k<m; k++) {
                if (teams[i][k] == '1' && topicList[k] == 0) {
                    topicList[k] = 1;
                }
            }

            for (int k=0; k<m; k++) {
                if (teams[j][k] == '1' && topicList[k] == 0) {
                    topicList[k] = 1;
                }
            }

            for (int k : topicList) 
                if (k == 1) topics++;

            if (topics > maxTopics) {
                maxTopics = topics;
                maxTeams = 1;
            }else if (topics == maxTopics) {
                maxTeams++;
            }
        }
    }

    cout << maxTopics << "\n" << maxTeams << "\n";

	return 0;
}
