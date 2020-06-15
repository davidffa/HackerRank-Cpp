#include <bits/stdc++.h>

using namespace std;

int freq[200] = {0}, d;

float getMedian() {
	if (d % 2 == 0) {
		int count=0;
		float i1=0;
		for (int i=0; i<200; i++) {
			if (freq[i] != 0) {
				count+=freq[i];
				if (i1 != 0) return (i+i1)/2.0;
			}
			if (count == d/2 && i1==0) {
				i1 = i;
			}else if (count > d/2) {
				return i;
			}
		}
	}else {
		int count=0;
		for (int i=0; i<200; i++) {
			if (freq[i] != 0) count+=freq[i];
			if (count >= d/2+1) {
				return i;
			}
		}
	}
	return -1; // just to prevent compiler error
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, nots=0, curr;
	vector<int> v;
	cin >> n >> d;

	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	for (int i=0; i<n-d; i++) {
		float med;
		if (i == 0) {
			vector<int> day(v.begin()+i, v.begin()+i+d);
			for (int a : day) ++freq[a];
			med = getMedian();
		}else {
			freq[v[i-1]]--;
			freq[v[i+d-1]]++;
			med = getMedian();
		}
		curr = v[d+i];

		if (curr >= 2.0*med) nots++;
	}

	cout << nots;
	
	return 0;
}
