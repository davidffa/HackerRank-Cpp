#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	int n, swapAsc=0, swapDesc=0;
	vector<int> v, v1, v2, v3, v4;
	map<int, int> mp1, mp2;
	cin >> n;

	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	for (int i=0; i<n; i++) {
		mp1[v[i]] = i;
		mp2[v[i]] = i;
	}


	v1 = v, v2 = v, v3 = v, v4 = v;

	sort(v1.begin(), v1.end());
	sort(v3.begin(), v3.end(), greater<int>());
	
	for (int i=0; i<n; i++) {
		if (v1[i] != v2[i]) {
			int idx=mp1[v1[i]];
			mp1[v1[i]]=i;
			mp1[v2[i]]=idx;
			swap(v2[i], v2[idx]);
			swapAsc++;
		}
		if (v3[i] != v4[i]) {
			int idx = mp2[v3[i]];
			mp2[v3[i]] = i;
			mp2[v4[i]] = idx;
			swap(v4[i], v4[idx]);
			swapDesc++;
		}
	}

	cout << min(swapAsc, swapDesc);

	return 0;
}
