#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	set<string> s;
	for (int i = 0; i < n; ++i)
	{
		string st;
		cin >> st;
		s.insert(st);
	}

	for(auto& it : s) {
		cout << it << endl;
	}
}

int main() {

	int t;
	cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}