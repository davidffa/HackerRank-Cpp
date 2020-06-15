#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, s, minHealth=1e5, maxHealth=0;
	cin >> n;
	vector<string> genes;
    int	health[n];
	for (int i=0; i<n; i++) {
		string x;
		cin >> x;
		genes.push_back(x);
	}
	for (int i=0; i<n; i++)
		cin >> health[i];
	cin >> s;

	while (s--) {
		int start, end, h=0;
		string d;
		cin >> start >> end >> d;
		for (int i=start; i<=end; i++) {
			int substring = genes[i].length();
			for (int j=0; j<=d.length()-substring; j++) {
				if (d.substr(j, substring) == genes[i]) {
					h+=i+1;
				}
			}
		}
		minHealth=min(minHealth, h);
		maxHealth=max(maxHealth, h);
	}

	cout << minHealth << " " << maxHealth;
	return 0;
}
