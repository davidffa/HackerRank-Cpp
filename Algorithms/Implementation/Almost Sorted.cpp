#include <bits/stdc++.h>

using namespace std;

void reverseArr(int arr[], int i, int j) {
	while (i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
}

int main() {
	int n, countReverse;
	cin >> n;
	int arr[n], arrSorted[n];
	bool swp = 0, reverse = 0;
	vector<int> s, r;

	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		arr[i] = x;
		arrSorted[i] = x;
	}

	sort(arrSorted, arrSorted+n);

	for (int i=0; i<n; i++) {
		if (arr[i] != arrSorted[i]) {
			if (swp) {
				if (s.size() == 2) swp = 0;
				else s.push_back(i+1);
			}
			if (reverse) {
				r.push_back(i);
			}
			if (!swp && !reverse) {
				swp = 1, reverse = 1;
				s.push_back(i+1);
				r.push_back(i);
			}
		}
	}

	sort(r.begin(), r.end());

	if (swp) sort(s.begin(), s.end());
	else if (reverse) {
		reverseArr(arr, r[0], r[r.size()-1]);
		for (int i=0; i<n; i++) {
			if (arr[i] != arrSorted[i]) {
				reverse = 0;
				break;
			}
		}
	}

	if (!swp && !reverse) cout << "no";
	else if (swp) {
		cout << "yes" << "\n";
		cout << "swap " << s[0] << " " << s[1];
	}else {
		cout << "yes" << "\n";
		cout << "reverse " << r[0]+1 << " " << r[r.size()-1]+1;
	}

	return 0;
}
