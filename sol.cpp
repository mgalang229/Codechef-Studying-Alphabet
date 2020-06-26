#include <bits/stdc++.h>

using namespace std;

void decode() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string ns;
		cin >> ns;
		sort(ns.begin(), ns.end());
		int cnt = 0;
		for (int j = 0; j < (int) ns.size(); j++) {
			for (int k = 0; k < (int) s.size(); k++) {
				if(ns[j] == s[k]) {
					cnt++;
				}
			} 
		}
		if (cnt == (int) ns.size()) {
			cout << "Yes";
		} else {
			cout << "No";
		}
		cout << '\n';
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
